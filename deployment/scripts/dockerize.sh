#!/bin/bash
set -e
cd "$(dirname "$0")/../.."

# Define AWS and image parameters
AWS_REGION="<aws-region>"
ACCOUNT_ID=$(aws sts get-caller-identity --query Account --output text)
ECR_REPO="${ACCOUNT_ID}.dkr.ecr.${AWS_REGION}.amazonaws.com/flowbpm"

# Build Docker image
docker build -t flowbpm:latest .

# Create repo if it doesn’t exist
aws ecr describe-repositories --repository-names flowbpm >/dev/null 2>&1 || \
    aws ecr create-repository --repository-name flowbpm

# Tag and push
docker tag flowbpm:latest $ECR_REPO:latest
aws ecr get-login-password --region $AWS_REGION | docker login --username AWS --password-stdin $ECR_REPO
docker push $ECR_REPO:latest

echo "✅ Image pushed to ECR: $ECR_REPO:latest"


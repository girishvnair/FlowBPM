#!/bin/bash
set -e
cd "$(dirname "$0")/../eks"

echo "🚀 Deploying FlowBPM to EKS..."
kubectl apply -f namespace.yaml
kubectl apply -f deployment.yaml
kubectl apply -f service.yaml

echo "✅ Deployment applied. Checking service..."
kubectl get svc -n flowbpm


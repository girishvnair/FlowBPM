# FlowBPM
BPM tool for managing workflows and processes, with the added benefit of modularity
# FlowCore BPM

FlowCore BPM is a free and open-source Business Process Management (BPM) and ERP solution written in C++. It is designed to manage business workflows and integrate with various systems for automating processes.

## Features
- Core Workflow Engine
- Business Rules Engine
- ERP modules (HR, Finance, Inventory, etc.)
- API Gateway for integrations
- Security and Role-based Access Control
- Analytics and Reporting
- Extensible Plugin System
- Integration with AWS for cloud-native deployment

## Requirements
- CMake
- Docker
- AWS CLI
- Kubernetes CLI (kubectl)
- AWS EKS Cluster
- AWS Elastic Container Registry (ECR)

## Local Development
1. **Clone the repository**:
    ```bash
    git clone https://github.com/<your-github-username>/FlowCoreBPM.git
    cd FlowCoreBPM
    ```

2. **Build the project**:
    Install dependencies, navigate to the project root, and run the `build.sh` script:
    ```bash
    ./deployment/scripts/build.sh
    ```

3. **Run Unit Tests**:
    ```bash
    ./deployment/scripts/run-tests.sh
    ```

## Dockerizing the Application
1. **Create Docker Image**:
    ```bash
    ./deployment/scripts/dockerize.sh
    ```

2. **Push Image to Amazon ECR**:
    Ensure your AWS CLI is configured. Then, push the Docker image:
    ```bash
    ./deployment/scripts/deploy.sh
    ```

## AWS EKS Deployment
1. **Create an EKS Cluster**:
    Follow AWS EKS documentation to create a Kubernetes cluster using eksctl:
    ```bash
    eksctl create cluster --name flowcore-bpm-cluster --region <aws-region>
    ```

2. **Deploy Application to EKS**:
    Apply the Kubernetes manifests in the `deployment/eks/` directory:
    ```bash
    kubectl apply -f deployment/eks/namespace.yaml
    kubectl apply -f deployment/eks/eks-deployment.yaml
    kubectl apply -f deployment/eks/service.yaml
    ```

3. **Access the Application**:
    Once deployed, you can access the service through the LoadBalancer created by AWS. Use the `kubectl get svc` command to get the public endpoint:
    ```bash
    kubectl get svc -n flowcore
    ```
Summary of Completed Modules:
Core Workflow/Process Engine Module
Business Rules Engine Module
Data Management & Persistence Module
User Interface Module (Web-based)
API Gateway & Integration Module
Case Management Module
Security & Access Control Module
Analytics & Reporting Module
Notification & Communication Module
Monitoring & Auditing Module
Workflow Modeling & Simulation Module
Extensibility & Plugin System Module
Scheduler & Job Management Module
AI/ML Integration Module
Document Management Module
Mobile Interface Module
Extensibility & Plugin System Module
Deployment Steps for AWS EKS
# FlowCore BPM - Deployment to AWS EKS

FlowCore BPM is a modular, extensible BPM tool written in C++ that provides workflow management, analytics, security, and document management.

## Prerequisites
- AWS CLI
- Kubernetes CLI (kubectl)
- Docker
- AWS EKS Cluster (created using `eksctl` or AWS Management Console)
- AWS Elastic Container Registry (ECR)

## Steps for Deployment

### Step 1: Clone the Repository

```bash
git clone https://github.com/<your-github-username>/FlowCoreBPM.git
cd FlowCoreBPM
```
Step 2: Build the Project
Build the project using CMake. Each module will be compiled into static libraries that will be packaged into Docker images.
```bash
mkdir build
cd build
cmake ..
make
```
Step 3: Dockerize the Application
To deploy on AWS EKS, you will need to create a Docker image for each component (API gateway, core engine, etc.).

Here is a sample Dockerfile for building a Docker image:
```bash
FROM ubuntu:latest
RUN apt-get update && apt-get install -y g++
COPY ./build /app
WORKDIR /app
CMD ["./FlowCoreBPM"]
```
Build the Docker image:
```bash
docker build -t flowcore-bpm:latest .
```
Step 4: Push Docker Image to Amazon ECR
Tag and push your Docker image to Amazon Elastic Container Registry (ECR).
```bash
# Authenticate Docker to ECR
aws ecr get-login-password --region <region> | docker login --username AWS --password-stdin <account-id>.dkr.ecr.<region>.amazonaws.com

# Tag the image
docker tag flowcore-bpm:latest <account-id>.dkr.ecr.<region>.amazonaws.com/flowcore-bpm:latest

# Push the image to ECR
docker push <account-id>.dkr.ecr.<region>.amazonaws.com/flowcore-bpm:latest
```
Step 5: Deploy to AWS EKS
Use Kubernetes manifests to deploy FlowCore BPM to your EKS cluster. Here is a sample deployment file.
deployment.yaml:
```bash
apiVersion: apps/v1
kind: Deployment
metadata:
  name: flowcore-bpm
spec:
  replicas: 3
  selector:
    matchLabels:
      app: flowcore-bpm
  template:
    metadata:
      labels:
        app: flowcore-bpm
    spec:
      containers:
      - name: flowcore-bpm
        image: <account-id>.dkr.ecr.<region>.amazonaws.com/flowcore-bpm:latest
        ports:
        - containerPort: 8080
```
service.yaml:
```bash
apiVersion: v1
kind: Service
metadata:
  name: flowcore-bpm-service
spec:
  selector:
    app: flowcore-bpm
  ports:
    - protocol: TCP
      port: 80
      targetPort: 8080
  type: LoadBalancer
```
Step 6: Apply Kubernetes Manifests
Use kubectl to deploy the application to AWS EKS.
```bash
kubectl apply -f deployment.yaml
kubectl apply -f service.yaml
```
Step 7: Access the Application
After the service is deployed, you can retrieve the public endpoint using:
```bash
kubectl get svc flowcore-bpm-service
```
Conclusion
Your FlowCore BPM system is now running on AWS EKS. You can interact with the API, monitor the system, and extend it with plugins.
## Contributing
We welcome contributions to improve FlowCore BPM. Please submit a pull request or open an issue for any feature requests.

## License
FlowCore BPM is released under the Apache-2.0 license.

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
    ```bash
        #!/bin/bash
        mkdir -p build
        cd build
        cmake ..
        make
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
    Dockerfile
    ```bash
    FROM ubuntu:latest
    RUN apt-get update && apt-get install -y g++
    COPY . /app
    WORKDIR /app
    RUN g++ -o myapp main.cpp
    CMD ["./myapp"]
    ```
    ```bash
    #!/bin/bash
    docker build -t flowcore-bpm .
    ```
3. **Push Image to Amazon ECR**:
    Ensure your AWS CLI is configured. Then, push the Docker image:
    ```bash
    ./deployment/scripts/deploy.sh
    ```
    ```bash
    #!/bin/bash
    aws ecr get-login-password --region <aws-region> | docker login --username AWS --password-stdin <aws-account-id>.dkr.ecr.<aws-region>.amazonaws.com
    docker tag flowcore-bpm:latest <aws-account-id>.dkr.ecr.<aws-region>.amazonaws.com/flowcore-bpm:latest
    docker push <aws-account-id>.dkr.ecr.<aws-region>.amazonaws.com/flowcore-bpm:latest
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

### Future scope 
## Advanced and Specialized Plugins for FlowCore BPM

1. **Custom Reporting and Dashboard Plugin**  
   - **Purpose**: Allows users to create personalized reports and dashboards that aren't covered by the built-in analytics.
   - **Key Features**:
     - Drag-and-drop report builder for customized KPIs.
     - Personalized dashboards for individual users or teams.
     - Scheduled report generation (daily, weekly, etc.).
     - Export reports to PDF, Excel, or other formats.

2. **Chatbot Integration Plugin**  
   - **Purpose**: Allows users to interact with workflows and tasks via chatbots integrated with platforms like Slack, Teams, or custom in-house bots.
   - **Key Features**:
     - Create, assign, and track tasks through chat.
     - Automated notifications and alerts sent via chat.
     - Simple command-based workflow execution.

3. **AI-Powered Process Suggestion Plugin**  
   - **Purpose**: Suggests workflow optimizations based on past performance using AI.
   - **Key Features**:
     - Predict task bottlenecks and suggest alternative paths.
     - Use machine learning to recommend task owners based on workload and skill set.
     - AI-driven resource allocation optimization for large teams.

4. **Gamification Plugin**  
   - **Purpose**: Introduces game-like features to motivate employees and enhance user engagement.
   - **Key Features**:
     - Points system for task completion.
     - Leaderboards based on user performance.
     - Task-related badges and achievements.
     - Rewards for meeting performance goals or completing workflows early.

5. **Voice Command Plugin**  
   - **Purpose**: Allows users to interact with workflows using voice commands.
   - **Key Features**:
     - Integrates with voice services like Amazon Alexa or Google Assistant.
     - Users can start workflows, assign tasks, or check task status using voice commands.
     - Ideal for hands-free environments or mobile users.

6. **E-Signature Integration Plugin**  
   - **Purpose**: Adds e-signature capabilities to workflows for legal or approval processes.
   - **Key Features**:
     - Integration with platforms like DocuSign or Adobe Sign.
     - Signature requests as tasks within workflows.
     - Secure document storage with verified signatures.

7. **Customer Portal Plugin**  
   - **Purpose**: Provides an external-facing portal for customers or third parties to interact with workflows (e.g., for approvals, submissions, or feedback).
   - **Key Features**:
     - Customer account creation and management.
     - External-facing tasks, such as submitting documents or approvals.
     - Secure interaction with limited access to internal workflows.

8. **Custom Notifications Plugin**  
   - **Purpose**: Extends the notification system by allowing users to customize how and when they receive notifications.
   - **Key Features**:
     - Custom notification rules (e.g., notifications only for high-priority tasks).
     - Integration with third-party notification systems like WhatsApp or Telegram.
     - Personalized alert preferences (e.g., mobile push, email, SMS).

9. **Blockchain Smart Contract Plugin**  
   - **Purpose**: Adds the ability to trigger and execute smart contracts as part of workflows, especially for financial and legal processes.
   - **Key Features**:
     - Integration with Ethereum or other blockchain platforms.
     - Automate payments or approvals via blockchain smart contracts.
     - Immutable record of executed contracts.

10. **Industry-Specific Compliance Plugins**  
   - **Purpose**: Provide ready-to-use compliance templates and workflows tailored for specific industries (e.g., healthcare, finance, insurance).
   - Key Features:
     - Pre-built workflows that adhere to industry regulations like HIPAA (for healthcare) or GDPR (for data privacy).
     - Automated audit trails and compliance reports.
     - Customizable compliance templates for different regions or industries.

These plugins allow FlowCore BPM to go beyond standard BPM capabilities and provide a rich, extensible toolset that differentiates your platform in competitive markets.

## License
FlowCore BPM is released under the Apache-2.0 license.

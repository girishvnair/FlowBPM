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

## Contributing
We welcome contributions to improve FlowCore BPM. Please submit a pull request or open an issue for any feature requests.

## License
FlowCore BPM is released under the MIT License.

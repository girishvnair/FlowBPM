pipeline {
    agent any
    environment {
        AWS_REGION = "<aws-region>"
        ACCOUNT_ID = credentials('aws-account-id')
    }
    stages {
        stage('Build') {
            steps {
                sh './deployment/scripts/build.sh'
            }
        }
        stage('Dockerize & Push') {
            steps {
                sh './deployment/scripts/dockerize.sh'
            }
        }
        stage('Deploy to EKS') {
            steps {
                sh './deployment/scripts/deploy.sh'
            }
        }
    }
    post {
        success { echo "✅ FlowBPM successfully deployed to EKS." }
        failure { echo "❌ Deployment failed. Check logs." }
    }
}


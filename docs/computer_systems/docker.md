---
layout: default
title: Docker
parent: Computer Systems
nav_order: 1
---

# Docker

Docker is an open-source platform for developing, shipping, and running applications in lightweight, portable containers. Containers allow applications to run consistently across different environments by packaging the code, dependencies, and system libraries together.

## Key Features

- **Containers**: Lightweight, portable units of software that run isolated processes.
- **Images**: Immutable templates used to create containers. Built using `Dockerfile`.
- **Portability**: Ensures applications run consistently across development, testing, and production environments.
- **Efficiency**: Shares the host OS kernel, making containers more efficient than virtual machines.
- **Docker Hub**: A public repository for finding and sharing container images.

## Common Commands

- `docker run` - Run a new container from an image.
- `docker ps` - List running containers.
- `docker build` - Build an image from a `Dockerfile`.
- `docker pull` - Download an image from Docker Hub.
- `docker exec` - Run commands inside a running container.
- `docker stop` - Stop a running container.
- `docker rm` - Remove stopped containers.
- `docker rmi` - Remove unused images.

## Example Workflow

1. Write a `Dockerfile`:
    ```dockerfile
    # Use a base image
    FROM python:3.9-slim
    
    # Set the working directory
    WORKDIR /app
    
    # Copy application files
    COPY . /app
    
    # Install dependencies
    RUN pip install -r requirements.txt
    
    # Define the default command
    CMD ["python", "app.py"]
    ```

2. Build the image:
    ```bash
    docker build -t my-python-app .
    ```

3. Run the container:
    ```bash
    docker run -d -p 5000:5000 my-python-app
    ```

## Key Concepts

- **Dockerfile**: A text file with instructions to build a Docker image.
- **Volumes**: Persistent storage for containers.
- **Networks**: Virtual networks connecting containers and services.
- **Orchestration**: Tools like Kubernetes work with Docker to manage clusters of containers.

## Useful Resources

- **Docker Documentation**: [docker.com/docs](https://docs.docker.com)
- **Docker Hub**: [hub.docker.com](https://hub.docker.com)
- **Play with Docker**: A free online environment to practice Docker ([play-with-docker.com](https://labs.play-with-docker.com)).

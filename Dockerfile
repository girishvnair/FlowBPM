# -------------------------
# Stage 1: Build
# -------------------------
FROM ubuntu:22.04 AS builder

# Install required build tools
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

# Copy source code
COPY . .

# Build the project
RUN mkdir -p build && cd build && cmake .. && make -j$(nproc)

# -------------------------
# Stage 2: Runtime
# -------------------------
FROM ubuntu:22.04

# Install minimal runtime dependencies (if any)
RUN apt-get update && apt-get install -y libstdc++6 && rm -rf /var/lib/apt/lists/*

WORKDIR /app

# Copy the compiled binary from builder
COPY --from=builder /app/build/bin/FlowBPMApp /app/FlowBPMApp

# Expose default port (you can change later)
EXPOSE 8080

# Run application
ENTRYPOINT ["./FlowBPMApp"]


#!/bin/bash
set -e

# Navigate to project root
cd "$(dirname "$0")/../.."

# Clean old builds
rm -rf build
mkdir -p build && cd build

# Configure and build with CMake
cmake ..
make -j$(nproc)

echo "✅ Build complete. Executables available in build/bin/"


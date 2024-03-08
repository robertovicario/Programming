#!/bin/bash

# Check if "build" directory exists
if [ -d "build" ]; then
    # If exists, remove it recursively
    rm -r build
fi

# Create "build" directory
mkdir build

# Change directory to "build"; exit if unsuccessful
cd build || exit

# Run CMake to generate build files using Ninja generator
cmake -GNinja ..

# Build project using Ninja
ninja

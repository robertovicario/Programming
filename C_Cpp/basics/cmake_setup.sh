#!/bin/bash

# Check if "build" directory exists
# If exists, remove it recursively
if [ -d "build" ]; then
    rm -r build
fi

# Create "build" directory
# Change directory to "build"; exit if unsuccessful
mkdir build
cd build || exit

# Run CMake to generate build files using Ninja generator
cmake -GNinja ..
ninja

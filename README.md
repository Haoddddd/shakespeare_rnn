# CPU Optimization Using A SST Simulator 
This project explores CPU optimization using the Structural Simulation Toolkit (SST). Our work leverages SST Core and SST Elements to simulate and analyze CPU performance, focusing on optimization techniques powered by a Convolutional Neural Network (CNN).

## Overview
In this repository, you will find:
1. Performance Statistics: CSV files containing memory and cache statistics collected during multiple optimization attempts.
    - Result & Comparison Spreadsheet: A summarized analysis of CPU performance.
        - Sheet 1: Core performance statistics.
        - Alexnet Sheet: Data from memory/cache optimizations, including parameter changes for each iteration.
        - Sheet 3: Summarized representation of the parameters that were changed in the CPU file.
2. Final Presentation: A detailed presentation of our findings and methodology.

## Implementation Details
The basic_vanadis.py file simulates the Vanadis CPU. We modified several parameters in this file to explore performance optimizations. Each modification's results were saved as a CSV file, and the top 11 iterations were selected based on performance improvements. The selected CSV files are included in this repository for reference.
The alexnet sheet in the Result & Comparison spreadsheet provides detailed documentation of parameter changes and their respective impacts on performance.
This project was tested on both Linux and macOS operating systems.

## CNN
alexnet is a CNN written in c. The c file was converted to a binary executable compatibale with RISC-v and used a benchmark for the Vanadis CPU.

## Requirements
To run this project, the following tools and dependencies are required:
- SST Core
- SST Elements
- OpenMPI
- RISC-V Toolchain
 
## Running our Code
sst basic_vanadis.py



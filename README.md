# CPU Optimization Using A CNN
This project explores CPU optimization using the Structural Simulation Toolkit (SST). Our work leverages SST Core and SST Elements to simulate and analyze CPU performance, focusing on optimization techniques powered by a Convolutional Neural Network (CNN).

## Overview
In this repository, you will find:
•	Performance Statistics: CSV files containing memory and cache statistics collected during multiple optimization attempts.
•	Result & Comparison Spreadsheet: A summarized analysis of CPU performance.
    o	Sheet 1: Core performance statistics.
    o	AlexNet Sheet: Data from memory/cache optimizations, including parameter changes for each iteration.
•	Final Presentation: A detailed presentation of our findings and methodology.

## Implementation Details
The basic_vanadis.py file simulates the Vanadis CPU. We modified several parameters in this file to explore performance optimizations. Each modification's results were saved as a CSV file, and the top 11 iterations were selected based on performance improvements. The selected CSV files are included in this repository for reference.
The AlexNet sheet in the Result & Comparison spreadsheet provides detailed documentation of parameter changes and their respective impacts on performance.
This project was tested on both Linux and macOS operating systems.

## Requirements
To run this project, the following tools and dependencies are required:
•	SST Core
•	SST Elements
•	OpenMPI
•	RISC-V Toolchain
 
## Running our Code
sst basic_vanadis.py



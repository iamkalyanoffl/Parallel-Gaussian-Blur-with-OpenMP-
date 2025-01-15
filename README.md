# Parallel-Gaussian-Blur-with-OpenMP-
This repository contains a project implementing a parallelized Gaussian Blur algorithm using OpenMP as part of the Computer Architecture and Organisation (CAO) course (BCSE205L). 

Parallel programming is essential in modern computing for performance  improvements. OpenMP is one of the most widely used frameworks for  parallel programming. This project discusses the parallelization of Gaussian Blur Algorithm using OpenMP.  

Gaussian Blur is a convolution image processing technique used as a preprocessing stage of many computer vision algorithms used for smoothing an image by blending pixel values based on a Gaussian function, thus 
effectively reducing noise and detail. 

---

## Features  
- Parallelized Gaussian Blur using OpenMP directives.  
- Efficient processing of large images.  
- Key OpenMP constructs used:
  - `#pragma omp parallel for`  
  - `#pragma omp task`  
- A 3x3 Gaussian Kernel for image convolution.  

---

## Code  
- Written in **C++** with **OpenCV** for image handling.  
- OpenMP is used to parallelize the loop structure for better performance.  

---

## Features to Add
- Dynamic adjustment of kernel size and sigma value.
- Support for grayscale images.
- Enhanced performance through OpenMP scheduling techniques.
- Integration of a GUI for image visualization.

---

**License**:
This project is licensed under the MIT License. See the LICENSE file for details.

---

## Contributors
- Kalyan Sudarsan 
- Priyadarshan Chandra Mohan 
- Jaffer Shakeeb Faizaan 

## Setup and Usage  

### Prerequisites  
#### Clone the Repository
```bash
git clone https://github.com/your_username/Parallel-Gaussian-Blur-OpenMP.git
cd Parallel-Gaussian-Blur-OpenMP

```bash

g++ -fopenmp gaussian_blur.cpp -o gaussian_blur `pkg-config --cflags --libs opencv4`
- **OpenCV**: Install using the following command:  

```bash
sudo apt-get install libopencv-dev
  
### Run the compiled program:
```bash
./gaussian_blur



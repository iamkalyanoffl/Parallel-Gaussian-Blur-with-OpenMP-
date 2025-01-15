#include <iostream> 
#include <vector> 
#include <opencv2/opencv.hpp>   
#include <omp.h> 
 
using namespace cv; 
using namespace std; 
 
const float gaussianKernel[3][3] = { 
    {1.0f/16.0f,2.0f/16.0f,1.0f/16.0f}, 
    {2.0f/16.0f,4.0f/16.0f,2.0f/16.0f}, 
    {1.0f/16.0f,2.0f/16.0f,1.0f/16.0f} 
}; 
 
void applyGaussianBlur(const Mat& inputImage, Mat& outputImage) { 
    int rows=inputImage.rows; 
    int cols=inputImage.cols; 
 
 
    for (int i=1;i<rows-1;++i) { 
        for (int j=1;j<cols-1;++j) { 
            Vec3f sum=Vec3f(0,0,0); 
 
  
            for (int ki=-1;ki<=1;++ki) { 
                for (int kj=-1;kj<=1;++kj) { 
                    Vec3b pixel=inputImage.at<Vec3b>(i+ki,j+kj); 
                    float kernelValue=gaussianKernel[ki+1][kj+1]; 
 
                    sum[0]+=pixel[0]*kernelValue; 
                    sum[1]+=pixel[1]*kernelValue;  
                    sum[2]+=pixel[2]*kernelValue; 
                } 
            } 
 
            outputImage.at<Vec3b>(i,j)=Vec3b((uchar)sum[0],(uchar)sum[1], 
(uchar)sum[2]); 
        } 
    } 
} 
 
int main() { 
  
    Mat inputImage=imread("input.bmp"); 
    if (inputImage.empty()) { 
        cout << "Could not load the image!" << endl; 
        return -1; 
    } 
 
    Mat outputImage=inputImage.clone(); 
 
    applyGaussianBlur(inputImage,outputImage); 
 
 
    imwrite("blurred_image.jpg",outputImage); 
 
    return 0; 
}

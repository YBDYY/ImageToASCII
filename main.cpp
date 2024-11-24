#include <iostream>
#include <string>
#include <vector>
#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;



char pixelToChar(int pixelValue){
    const char* asciiChars = "@%#*+=-:. ";
    int index = (pixelValue * (strlen(asciiChars)-1))/ 255;
    return asciiChars[index];
}



void imageToASCII(const cv::Mat& image) {
    //resize the image to fit beter in terminal
    cv::Mat resizedImage;
    double aspectRatio = (double)image.cols/image.rows;
    int newWidth = 100;
    int newHeight = newWidth/aspectRatio;
    cv::resize(image, resizedImage, cv::Size(newWidth,newHeight));


    cv::Mat grayImage;
    cv::cvtColor(resizedImage, grayImage, cv::COLOR_BGR2GRAY);

    for (int i =0;i<grayImage.rows;i++){
        for (int j = 0;j<grayImage.cols;j++){
            int pixelValue = grayImage.at<uchar>(i, j );
            cout << pixelToChar(pixelValue);
        }
        cout << endl;
    }
}
int main() {
    string imagePath = "Path/To/Your/Image.jpg"; //add your own path here
    cv::Mat image = cv::imread(imagePath);

    if(image.empty()){
        cerr<< "Error: Could not open or find the image." << endl;
        return -1;
    }

    imageToASCII(image);

    return 0;
}



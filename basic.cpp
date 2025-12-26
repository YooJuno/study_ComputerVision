// g++ main main.cpp $(pkg-config opencv4 --libs --cflags)

#include <opencv4/opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    Mat img = imread("./image.png", IMREAD_COLOR);
    if (img.empty()) {
        printf("Failed to load image\n");
        return -1;
    }

    imshow("Image", img);
    waitKey(0);

    return 0;
}
#include <opencv2/opencv.hpp>
#include "opencv2/core/utils/logger.hpp"
#include <iostream>
using namespace cv;

int main(int, char**)
{
	VideoCapture cap(0);
	if (!cap.isOpened())
		return -1;
	Mat edges;
	namedWindow("edges", 1);
	Mat frame;
	while (1) {

		cap >> frame;
		imshow("edges", frame);
		if (waitKey(30) >= 0) break;
	}
}
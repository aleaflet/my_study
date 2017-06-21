#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main(){
	cv::Mat image;
	cv::namedWindow("Original Image", CV_WINDOW_AUTOSIZE);
	image = cv::imread("src.data",CV_LOAD_IMAGE_COLOR);
	cv::imshow("Original Image", image);
	cv::waitKey(0);
	cv::destroyWindow("Original Image")
	return 0;
}
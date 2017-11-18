#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	Mat img = imread("use.jpg", CV_LOAD_IMAGE_UNCHANGED);
	if (img.empty()) {
		cout << "Error : Image cannot be loaded" << endl;
		system("pause");
		return -1;
       	}
	namedWindow("MyWindow", CV_WINDOW_AUTOSIZE);
	imshow("MyWindow", img);


	waitKey(0);

	destroyWindow("MyWindow");

	return 0;
}

#include <opencv2/core/types_c.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;

int main(int argc, char** argv) {
        Mat m = imread("../img/map.png", IMREAD_COLOR);
        Mat img = imread("../img/tanjiro.jpg", IMREAD_COLOR);

        for (int r = 0; r < img.rows; ++r) {
            for (int c = 0; c < img.cols; ++c) {
                // 0 - b, 1 - g, 2 - r
                img.at<Vec3b>(r, c)[0] = m.at<Vec3b>(0, img.at<Vec3b>(r,c)[0])[2];
                img.at<Vec3b>(r, c)[1] = m.at<Vec3b>(1, img.at<Vec3b>(r,c)[1])[1];
                img.at<Vec3b>(r, c)[2] = m.at<Vec3b>(2, img.at<Vec3b>(r,c)[2])[0];
            }
        }
        imwrite("../img/tanjiro_colored.jpg", img);
}

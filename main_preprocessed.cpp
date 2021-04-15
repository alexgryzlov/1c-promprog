#include <opencv2/core/types_c.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "data/data.h"

using namespace cv;

int main(int argc, char** argv) {
    Mat img = imread("../img/tanjiro.jpg", IMREAD_COLOR);

    for (int r = 0; r < img.rows; ++r) {
        for (int c = 0; c < img.cols; ++c) {
            img.at<Vec3b>(r, c)[0] = col[2][img.at<Vec3b>(r, c)[0]];
            img.at<Vec3b>(r, c)[1] = col[1][img.at<Vec3b>(r, c)[1]];
            img.at<Vec3b>(r, c)[2] = col[0][img.at<Vec3b>(r, c)[2]];
        }
    }
    imwrite("../img/tanjiro_colored.jpg", img);
}


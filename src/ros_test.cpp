/**
 *
 *
 *
 *
 * */

#include <ros/ros.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <QWidget>
 int main(int argc, char** argv)
 {
     QWidget wid;
     wid.show();

     cv::Mat mat;
     mat = cv::imread("/home/chen/Desktop/planets.png");
     cv::namedWindow("dd");
     cv::imshow("dd",mat);
     cv::waitKey(0);
     return 0;
 }

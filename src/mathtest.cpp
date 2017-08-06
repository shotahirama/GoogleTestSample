#include <cmath>
#include <iostream>
#include <gtest/gtest.h>

double Deg2Rad(double deg)
{
    return M_PI*deg/180.0;
}

double Rad2Deg(double rad){
    return 180.0*rad/M_PI;
}

TEST(mathtest, angletest)
{
    EXPECT_EQ(Deg2Rad(180.0),M_PI);
    EXPECT_EQ(Rad2Deg(M_PI),180.0);
}

TEST(mathtest, powtest)
{
    EXPECT_EQ(pow(1,0),1);
    EXPECT_EQ(pow(0,1),0);
    EXPECT_EQ(pow(2,2),4);
    EXPECT_EQ(pow(2,3),8);
}
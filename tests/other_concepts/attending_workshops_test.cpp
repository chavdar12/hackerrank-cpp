#include <gtest/gtest.h>
#include <algorithm>
using namespace std;
#include "other_concepts/attending_workshops.hpp"

TEST(AttendingWorkshops, Sample) {
    int start[] = {1, 3, 0, 5, 5, 8};
    int duration[] = {1, 1, 6, 2, 4, 1};
    Available_Workshops *aws = initialize(start, duration, 6);
    EXPECT_EQ(CalculateMaxWorkshops(aws), 4);
    delete[] aws->workshops;
    delete aws;
}

TEST(AttendingWorkshops, AllOverlapping) {
    int start[] = {0, 1, 2};
    int duration[] = {10, 10, 10};
    Available_Workshops *aws = initialize(start, duration, 3);
    EXPECT_EQ(CalculateMaxWorkshops(aws), 1);
    delete[] aws->workshops;
    delete aws;
}

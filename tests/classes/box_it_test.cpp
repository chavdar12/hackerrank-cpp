#include <gtest/gtest.h>
#include <sstream>
using namespace std;
#include "classes/box_it.hpp"

TEST(BoxIt, DimensionsAndVolume) {
    Box b(3, 4, 5);
    EXPECT_EQ(b.getLength(), 3);
    EXPECT_EQ(b.getBreadth(), 4);
    EXPECT_EQ(b.getHeight(), 5);
    EXPECT_EQ(b.CalculateVolume(), 60);
    EXPECT_EQ(Box().CalculateVolume(), 0);
}

TEST(BoxIt, VolumeDoesNotOverflow) {
    EXPECT_EQ(Box(100000, 100000, 100000).CalculateVolume(), 1000000000000000LL);
}

TEST(BoxIt, LexicographicLess) {
    Box a(1, 2, 3), b(1, 2, 4), c(1, 3, 0), d(2, 0, 0);
    EXPECT_TRUE(a < b);
    EXPECT_TRUE(b < c);
    EXPECT_TRUE(c < d);
    EXPECT_FALSE(b < a);
    EXPECT_FALSE(a < a);
}

TEST(BoxIt, CopyAndPrint) {
    Box a(3, 4, 5);
    Box b(a);
    ostringstream out;
    out << b;
    EXPECT_EQ(out.str(), "3 4 5");
}

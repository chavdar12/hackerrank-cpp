#include <gtest/gtest.h>
#include <iostream>
using namespace std;
#include "run_io.hpp"
#include "inheritance/rectangle_area.hpp"

TEST(RectangleArea, DisplaysDimensionsAndArea) {
    RectangleArea r;
    EXPECT_EQ(run_io("10 5", [&] {
        r.read_input();
        r.Rectangle::display();
        r.display();
    }), "10 5\n50\n");
}

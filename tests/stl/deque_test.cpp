#include <gtest/gtest.h>
#include "run_io.hpp"
#include "stl/deque.hpp"

TEST(Deque, SlidingWindowMax) {
    int a[] = {3, 4, 6, 3, 4};
    EXPECT_EQ(run_io("", [&] { printKMax(a, 5, 2); }), "4 6 6 4\n");
    int b[] = {3, 4, 5, 8, 1, 4, 10};
    EXPECT_EQ(run_io("", [&] { printKMax(b, 7, 4); }), "8 8 8 10\n");
}

TEST(Deque, WindowIsWholeArray) {
    int a[] = {2, 7, 1};
    EXPECT_EQ(run_io("", [&] { printKMax(a, 3, 3); }), "7\n");
}

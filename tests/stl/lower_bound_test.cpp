#include <gtest/gtest.h>
#include "run_io.hpp"
#include "stl/lower_bound.hpp"

TEST(LowerBound, Sample) {
    EXPECT_EQ(run_io("8\n1 1 2 2 6 9 9 15\n4\n1\n4\n9\n15", solve),
              "Yes 1\nNo 5\nYes 6\nYes 8\n");
}

TEST(LowerBound, LargerThanAll) {
    EXPECT_EQ(run_io("3\n1 2 3\n1\n20", solve), "No 4\n");
}

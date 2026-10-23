#include <gtest/gtest.h>
#include "run_io.hpp"
#include "stl/sets.hpp"

TEST(Sets, InsertEraseQuery) {
    EXPECT_EQ(run_io("8\n1 9\n1 6\n1 10\n1 4\n3 6\n3 14\n2 6\n3 6", solve), "Yes\nNo\nNo\n");
}

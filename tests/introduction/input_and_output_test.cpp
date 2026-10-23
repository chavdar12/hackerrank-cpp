#include <gtest/gtest.h>
#include "run_io.hpp"
#include "introduction/input_and_output.hpp"

TEST(InputAndOutput, PrintsSum) {
    EXPECT_EQ(run_io("1 2 7", solve), "10\n");
}

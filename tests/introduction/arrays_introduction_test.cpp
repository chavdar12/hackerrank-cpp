#include <gtest/gtest.h>
#include "run_io.hpp"
#include "introduction/arrays_introduction.hpp"

TEST(ArraysIntroduction, PrintsReversed) {
    EXPECT_EQ(run_io("4\n1 4 3 2", solve), "2 3 4 1 ");
}

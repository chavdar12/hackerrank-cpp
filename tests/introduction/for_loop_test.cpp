#include <gtest/gtest.h>
#include "run_io.hpp"
#include "introduction/for_loop.hpp"

TEST(ForLoop, WordsThenParity) {
    EXPECT_EQ(run_io("8 11", solve), "eight\nnine\neven\nodd\n");
}

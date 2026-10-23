#include <gtest/gtest.h>
#include "run_io.hpp"
#include "other_concepts/preprocessor.hpp"

TEST(Preprocessor, PrintsRange) {
    EXPECT_EQ(run_io("5\n32 332 -23 -154 65", solve), "Result = 486\n");
}

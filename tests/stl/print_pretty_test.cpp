#include <gtest/gtest.h>
#include "run_io.hpp"
#include "stl/print_pretty.hpp"

TEST(PrintPretty, Sample) {
    EXPECT_EQ(run_io("", [] { print_pretty(100.345, 2006.008, 2331.41592653498); }),
              "0x64\n_______+2006.01\n2.331415927E+03\n");
}

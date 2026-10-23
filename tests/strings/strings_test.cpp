#include <gtest/gtest.h>
#include "run_io.hpp"
#include "strings/strings.hpp"

TEST(Strings, LengthsConcatAndSwap) {
    EXPECT_EQ(run_io("abcd ef", solve), "4 2\nabcdef\nebcd af\n");
}

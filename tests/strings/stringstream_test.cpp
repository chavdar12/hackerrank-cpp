#include <gtest/gtest.h>
#include "strings/stringstream.hpp"

TEST(StringStream, ParsesCommaSeparatedInts) {
    EXPECT_EQ(parseInts("23,4,56"), (vector<int>{23, 4, 56}));
    EXPECT_EQ(parseInts("7"), (vector<int>{7}));
}

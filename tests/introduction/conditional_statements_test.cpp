#include <gtest/gtest.h>
#include "run_io.hpp"
#include "introduction/conditional_statements.hpp"

TEST(ConditionalStatements, SpellsOneToNine) {
    EXPECT_EQ(run_io("", [] { printNumberInWords(1); }), "one");
    EXPECT_EQ(run_io("", [] { printNumberInWords(5); }), "five");
    EXPECT_EQ(run_io("", [] { printNumberInWords(9); }), "nine");
}

TEST(ConditionalStatements, LargeNumber) {
    EXPECT_EQ(run_io("", [] { printNumberInWords(44); }), "Greater than 9");
}

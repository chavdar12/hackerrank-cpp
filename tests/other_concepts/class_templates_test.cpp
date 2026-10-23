#include <gtest/gtest.h>
#include <string>
using namespace std;
#include "other_concepts/class_templates.hpp"

TEST(ClassTemplates, AddsNumbers) {
    EXPECT_EQ(AddElements<int>(3).add(4), 7);
    EXPECT_DOUBLE_EQ(AddElements<double>(1.5).add(2.25), 3.75);
}

TEST(ClassTemplates, ConcatenatesStrings) {
    EXPECT_EQ(AddElements<string>("ab").concatenate("cd"), "abcd");
}

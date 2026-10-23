#include <gtest/gtest.h>
#include <string>

enum class Fruit { apple, orange, pear };

enum class Color { red, green, orange };

template<typename T>
struct Traits;

#include "other_concepts/class_template_specialization.hpp"

TEST(ClassTemplateSpecialization, Colors) {
    EXPECT_EQ(Traits<Color>::name(0), "red");
    EXPECT_EQ(Traits<Color>::name(1), "green");
    EXPECT_EQ(Traits<Color>::name(2), "orange");
    EXPECT_EQ(Traits<Color>::name(3), "unknown");
}

TEST(ClassTemplateSpecialization, Fruits) {
    EXPECT_EQ(Traits<Fruit>::name(0), "apple");
    EXPECT_EQ(Traits<Fruit>::name(1), "orange");
    EXPECT_EQ(Traits<Fruit>::name(2), "pear");
    EXPECT_EQ(Traits<Fruit>::name(-1), "unknown");
}

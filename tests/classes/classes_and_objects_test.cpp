#include <gtest/gtest.h>
#include <iostream>
using namespace std;
#include "run_io.hpp"
#include "classes/classes_and_objects.hpp"

TEST(ClassesAndObjects, TotalScore) {
    Student s;
    run_io("30 40 45 10 10", [&] { s.input(); });
    EXPECT_EQ(s.calculateTotalScore(), 135);
}

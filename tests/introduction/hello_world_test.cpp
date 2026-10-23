#include <gtest/gtest.h>
#include "run_io.hpp"
#include "introduction/hello_world.hpp"

TEST(HelloWorld, PrintsGreeting) {
    EXPECT_EQ(run_io("", solve), "Hello, World!");
}

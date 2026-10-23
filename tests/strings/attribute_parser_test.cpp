#include <gtest/gtest.h>
#include "run_io.hpp"
#include "strings/attribute_parser.hpp"

TEST(AttributeParser, Sample) {
    string input =
            "4 3\n"
            "<tag1 value = \"HelloWorld\">\n"
            "<tag2 name = \"Name1\">\n"
            "</tag2>\n"
            "</tag1>\n"
            "tag1.tag2~name\n"
            "tag1~name\n"
            "tag1~value\n";
    EXPECT_EQ(run_io(input, solve), "Name1\nNot Found!\nHelloWorld\n");
}

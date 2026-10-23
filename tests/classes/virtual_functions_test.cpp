#include <gtest/gtest.h>
#include <memory>
#include "run_io.hpp"
#include "classes/virtual_functions.hpp"

TEST(VirtualFunctions, ReadsAndPrintsWithIds) {
    unique_ptr<Person> people[] = {
        make_unique<Professor>(), make_unique<Student>(), make_unique<Professor>()
    };
    string out = run_io("Walter 56 99\nJesse 18 50 48 97 76 34 98\nPinkman 22 10", [&] {
        for (auto &p: people) p->getdata();
        for (auto &p: people) p->putdata();
    });
    EXPECT_EQ(out, "Walter 56 99 1\nJesse 18 403 1\nPinkman 22 10 2\n");
}

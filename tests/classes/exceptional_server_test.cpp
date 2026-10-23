#include <gtest/gtest.h>
#include <iostream>
#include <new>
#include <stdexcept>
using namespace std;

class Server {
public:
    static int compute(long long A, long long B) {
        if (A < 0) throw invalid_argument("A is negative");
        if (A > 1000000000) throw bad_alloc();
        if (B == 0) throw 0;
        return A / B;
    }
};

#include "run_io.hpp"
#include "classes/exceptional_server.hpp"

TEST(ExceptionalServer, Result) {
    EXPECT_EQ(run_io("", [] { handle_request(10, 2); }), "5\n");
}

TEST(ExceptionalServer, StandardException) {
    EXPECT_EQ(run_io("", [] { handle_request(-1, 2); }), "Exception: A is negative\n");
}

TEST(ExceptionalServer, BadAlloc) {
    EXPECT_EQ(run_io("", [] { handle_request(2000000000, 1); }), "Not enough memory\n");
}

TEST(ExceptionalServer, OtherException) {
    EXPECT_EQ(run_io("", [] { handle_request(1, 0); }), "Other Exception\n");
}

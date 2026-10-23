#pragma once
#include <functional>
#include <iostream>
#include <sstream>
#include <string>

inline std::string run_io(const std::string &input, const std::function<void()> &fn) {
    std::istringstream in(input);
    std::ostringstream out;
    auto *old_in = std::cin.rdbuf(in.rdbuf());
    auto *old_out = std::cout.rdbuf(out.rdbuf());
    fn();
    std::cin.rdbuf(old_in);
    std::cout.rdbuf(old_out);
    return out.str();
}

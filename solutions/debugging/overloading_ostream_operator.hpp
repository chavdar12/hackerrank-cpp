#pragma once
#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string &first_name, const std::string &last_name)
        : first_name_(first_name), last_name_(last_name) {
    }

    const std::string &get_first_name() const { return first_name_; }
    const std::string &get_last_name() const { return last_name_; }

private:
    std::string first_name_;
    std::string last_name_;

    friend std::ostream &operator<<(std::ostream &os, const Person &person);
};

std::ostream &operator<<(std::ostream &os, const Person &person) {
    return os << "first_name=" << person.first_name_ << ",last_name=" << person.last_name_;
}

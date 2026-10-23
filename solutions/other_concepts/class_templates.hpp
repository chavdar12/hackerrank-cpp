#pragma once

template<typename T>
class AddElements {
    T element;

public:
    AddElements(T arg) : element(arg) {
    }

    T add(T arg2) {
        return element + arg2;
    }
};

template<>
class AddElements<string> {
    string element;

public:
    AddElements(string arg) : element(arg) {
    }

    string concatenate(string arg2) {
        return element + arg2;
    }
};

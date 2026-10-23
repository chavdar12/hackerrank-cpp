#pragma once

template<>
struct Traits<Color> {
    static std::string name(int index) {
        switch (index) {
            case static_cast<int>(Color::red): return "red";
            case static_cast<int>(Color::green): return "green";
            case static_cast<int>(Color::orange): return "orange";
            default: return "unknown";
        }
    }
};

template<>
struct Traits<Fruit> {
    static std::string name(int index) {
        switch (index) {
            case static_cast<int>(Fruit::apple): return "apple";
            case static_cast<int>(Fruit::orange): return "orange";
            case static_cast<int>(Fruit::pear): return "pear";
            default: return "unknown";
        }
    }
};

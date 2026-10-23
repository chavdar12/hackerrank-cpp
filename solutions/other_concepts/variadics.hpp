#pragma once

template<bool... digits>
int reversed_binary_value() {
    int value = 0;
    int i = 0;
    ((value += (digits << i++)), ...);
    return value;
}

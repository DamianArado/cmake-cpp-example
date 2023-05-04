#include <iostream>
#include "MathLibrary.cpp"

int main() {
    math_library::Arithmetic arithmetic;
    std::cout << "1 + 2 = " << arithmetic.add(1, 2) << std::endl;
    return 0;
}
#include <iostream>
#include "math_utils.h"

int main() {
    std::cout << "CMake Demo Program\n";
    std::cout << "===================\n\n";

    int temp = 0;
    double a = 3.0, b = 4.0;
    std::cout << a << " + " << b << " = " << MathUtils::add(a, b) << "\n";
    std::cout << a << " * " << b << " = " << MathUtils::multiply(a, b) << "\n";
    std::cout << a << " squared = " << MathUtils::square(a) << "\n";

    MathUtils::add(a, b) + MathUtils::multiply(a, b);
    std::cout << "\nBuild successful!\n";
    return 0;
}

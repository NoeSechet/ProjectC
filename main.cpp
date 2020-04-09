#include <iostream>

#include "includes/math/Calc.h"

extern int Add(int a, int b);

int main() {

    Calc var;
    std::cout << Add(1,3) << std::endl;
    std::cout << var.Sub(1, 5) << std::endl;
    std::cin;
    return 0;
}

//
// Created by PravinMore on 13/11/2025.
//

#include "function_in_c.h"

#include  <iostream>

int multiply(int a , int b) {
    return a * b;
}

int main() {
    int result = multiply(1, 2);

    std::cout << result << std::endl;

    std::cin.get();
}
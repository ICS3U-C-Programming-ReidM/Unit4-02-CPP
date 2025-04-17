// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program calculates the factorial of a positive integer

#include <cmath>
#include <iostream>
#include <string>

int main() {
    double input;
    int number;
    int factorial = 1;
    int i = 1;
    std::string user_num;

    do {
        std::cout << "Enter a whole number: ";
        std::cin >> user_num;

        try {
            input = std::stod(user_num);  // convert string to double
        } catch (...) {
            std::cout << user_num << " is not an integer." << std::endl;
            input = -1;
            continue;
        }

        if (floor(input) != input) {
            std::cout << user_num << " is not an integer." << std::endl;
            input = -1;
        } else if (input < 0) {
            std::cout << user_num
                      << " is not a positive integer." << std::endl;
            input = -1;
        }
    } while (input < 0 || floor(input) != input);

    number = static_cast<int>(input);

    do {
        factorial *= i;
        i++;
    } while (i <= number);

    std::cout << "The factorial of " << number
              << " is: " << factorial << std::endl;

    return 0;
}

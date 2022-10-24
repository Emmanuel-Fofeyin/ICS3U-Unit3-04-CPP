// Copyright (c) 2022 Emmanuel All rights reserved.

// Created by : Emmanuel Fofeyin
// Created on : Oct 2022
// This program checks if integers are positive, negative or just zero
// learning if... then... elseif... else... statements in python.

#include <iostream>

int main() {
    // creating variables
    int inputNumber;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> inputNumber;

    // process and output
    if (inputNumber > 0) {
        std::cout << "\n" << inputNumber << " is a positive number.";
    } else if (inputNumber < 0) {
        std::cout << "\n" << inputNumber << " is a negative number.";
    } else {
        std::cout << "\n" << inputNumber
                  << " is just zero.";
    }

    std::cout << "\n\n\nDone.\n";
}

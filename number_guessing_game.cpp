// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This is a number guessing program

#include <iostream>

int main() {
    // This the the constant number
    const float constant_number = 5;
    // These are the variables
    float number;

    // input
    std::cout << "Can you guess the number I choose from 0 to 10? ";
    std::cin >> number;

    // process
    if (number == constant_number) {
        // output
        std::cout << "You guessed it :)";
    }
}

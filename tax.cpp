// Copyright (c) 2022 Hunter Connolly All rights reserved
//
// Created by: Hunter Connolly
// March 27, 2022
// This program calculates total from subtotal and British Colombia tax

#include <iostream>
#include <iomanip>


int main() {
    // declare constants
    const float HST_BC = 0.12;

    // declare variables
    float tax, total, subtotal;

    // get the subtotal from the user
    std::cout << "Today we will calculate the total of your items using British"
" Colombia tax rates\n";
    std::cout << "Enter the subtotal: $";
    std::cin >> subtotal;

    // calculate the tax and total price
    tax = subtotal * HST_BC;
    total = subtotal + tax;

    // display the hst and total to the user to the user (output)
    std::cout << "\n";
    std::cout << "The HST is " << std::fixed << std::setprecision(2)\
    << std::setfill('0') << tax << ", and the total cost is $" \
    << std::fixed << std::setprecision(2) << std::setfill('0') << total << "\n";
}

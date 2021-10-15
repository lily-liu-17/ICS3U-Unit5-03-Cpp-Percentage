// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program convert levels to percentage

#include <iostream>
#include <string>

int CalculatePercent(std::string level) {
    // This function will convert levels to percentage
    int percentage;


    if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 90;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 75;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 65;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 54;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R") {
        percentage = 25;
    } else {
        percentage = -1;
    }

    return percentage;
}

int main() {
    // this is he main function
    std::string userLevelString;
    int someVar;

    // input
    std::cout << "Enter the level you want converted to a percentage : ";
    std::cin >> userLevelString;

    someVar = CalculatePercent(userLevelString);
    // call functions & ouyput
    if (someVar == -1) {
        std::cout << userLevelString << " is an invalid input." << std::endl;
    } else {
        std::cout << "Level " << userLevelString << " has a percentage of " <<
        CalculatePercent(userLevelString) << "%"<< std::endl;
    }

    std::cout << "\nDone." << std::endl;
}

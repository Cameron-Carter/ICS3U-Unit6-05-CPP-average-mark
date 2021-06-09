// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: June 2021
// This program finds the smallest of 10 random numbers

#include <iostream>
#include <string>
#include <list>


int FindAverage(std::list<int> marks) {
    // This function prints the numbers and determines the smallest one

    // Declarations
    float total = 0;
    int average;

    // Get average
    for (int counter : marks) {
        total += counter;
    }
    average = total / marks.size();
    return average;
}


main() {
    // This function gets random numbers

    // Declaring variables
    std::list<int> allMarks;
    std::string markAsString;
    int counter = 0;
    int theAverage;
    float mark;

    // Process and Output
    try {
        std::cout << "Enter a mark as a %: ";
        std::cin >> markAsString;
        mark = std::stof(markAsString);
        if (mark == -1) {
            std::cout << "There are no marks to average." << std::endl;
        } else {
            allMarks.push_back(mark);
            while (true) {
                std::cout << "Enter a mark as a %: ";
                std::cin >> mark;
                if (mark == -1) {
                    break;
                }
            allMarks.push_back(mark);
            }
            // Process and Output w/ FindAverage call
            theAverage = FindAverage(allMarks);
            std::cout << "\nThe average is " << theAverage << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }
    std::cout << "\nDone" << std::endl;
}

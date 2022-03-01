// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>

int main() {
    // I calculate area and perimeter
    int length;
    int width;
    int area;
    int perimeter;
    // input
    std::cout << "Enter length of the rectangle in mm: ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle in mm: ";
    std::cin >> width;
    // process
    area = length*width;
    perimeter = 2*(length+width);
    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm." << std::endl;
    std::cout << "\nDone." << std::endl;
}

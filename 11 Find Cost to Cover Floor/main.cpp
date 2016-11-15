//
//  main.cpp
//  11 Find Cost to Cover Floor
//
//  Created by Greg Salvesen on 11/15/16.
//  Copyright © 2016 DVS. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "This program will determine the cost of tiling for a room." << std::endl;
    //Initialize the width, height and tile cost variables
    int width = 0;
    int height = 0;
    int tileCost = 0;
    // Get values from the user
    std::cout << "Enter the width of the room: ";
    std::cin >> width;
    std::cout << "Enter the height of the room: ";
    std::cin >> height;
    std::cout << "Enter the cost of tiling: ";
    std::cin >> tileCost;
    
    // Calculate the total cost to tile the room
    int totalCost = width * height * tileCost;
    
    std::cout << "The total cost to tile a " << width << "x" << height << " room with $" << tileCost << " tiles is $" << totalCost << "." << std::endl;
    
    return 0;

}

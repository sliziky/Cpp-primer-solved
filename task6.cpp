// MistrovstviCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{

    unsigned int milesTravelled, galonsSpent;
    float mpg;
    std::cout << "Miles: ";
    std::cin >> milesTravelled;

    std::cout << "Gallons: ";
    std::cin >> galonsSpent;

    mpg = float (milesTravelled) / float (galonsSpent);

    std::cout << "Fuel consumption in l/km is: " << 235.21 / mpg;
    getchar();
    getchar();
    return 0;
}


// MistrovstviCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
    unsigned int miles, galons;

    std::cout << "How many miles you did you travel? ";
    std::cin >> miles;
    
    std::cout << "How many gallons you traveled? ";
    std::cin >> galons;

    std::cout << "Your fuel consumption is : " << miles / galons << " miles/galon";

    getchar();
    getchar();
    return 0;
}


// MistrovstviCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
    const int CM_PER_MET = 100;
    unsigned int height;
    std::cout << "Your height in centimeters: ";
    std::cin >> height;
    std::cout << "Your height is : " << height / CM_PER_MET << "m " << height % CM_PER_MET << "cm." << std::endl;
    getchar();
    getchar();
    return 0;
}


// MistrovstviCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
    unsigned int height, weight;
    float bmi;
    std::cout << "Your height in cm: ";
    std::cin >> height;
    std::cout << "Your weight: ";
    std::cin >> weight;
    bmi = weight / ( (height / 100.0)*(height / 100.0) );
    std::cout << "Your bmi is: " << bmi;
    getchar();
    getchar();
    return 0;
}


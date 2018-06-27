// MistrovstviCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
    unsigned int degrees, minutes, seconds;
    float result;
    std::cout << "Angle: ";
    std::cin >> degrees;
    std::cout << "Minutes: ";
    std::cin >> minutes;
    std::cout << "Seconds: ";
    std::cin >> seconds;
    result = degrees + (minutes / 60.0) + (seconds / 3600.0);
    std::cout << "Degrees " << degrees << 
                 " Minutes " << minutes << 
                 " Seconds " << seconds << 
                 " = " << result << " degrees";

    getchar();
    getchar();
    return 0;
}


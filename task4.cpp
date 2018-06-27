// MistrovstviCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
    const unsigned int H_IN_DAY = 24,
                       MIN_IN_H = 60,
                       SEC_IN_MIN = 60;
   
  
    long seconds;
    std::cout << "Enter seconds: ";
    std::cin >> seconds;

    std::cout << "Days: " << seconds / (H_IN_DAY*MIN_IN_H*SEC_IN_MIN) << std::endl;
    seconds %= H_IN_DAY * MIN_IN_H*SEC_IN_MIN;
    
    std::cout << "Hours: " << (seconds / (SEC_IN_MIN * MIN_IN_H)) << std::endl;
    seconds %= SEC_IN_MIN * MIN_IN_H;
    
    std::cout << "Minutes: " << seconds / (SEC_IN_MIN) << std::endl;
    seconds %= SEC_IN_MIN;
    std::cout << "Seconds: " << seconds;
    
    getchar();
    getchar();
    return 0;
}


//
//  AllOf.cpp
//  CppAlgorithms
//
//  Created by Skident on 7/31/16.
//  Copyright © 2016 Skident. All rights reserved.
//

#include <iostream>     // std::cout
#include <algorithm>    // std::all_of
#include <array>        // std::array

void AllOf_algo()
{
    std::array<int,8> foo = {3,5,7,11,13,17,19,23};
    
    if ( std::all_of(foo.begin(), foo.end(), [](int i){return i%2;}) )
        std::cout << "All the elements are odd numbers.\n";
}

void AllOf_forRange()
{
    std::array<int,8> foo = {3,5,7,11,13,17,19,23};
    bool isOdd = true;
    
    for (const auto& element : foo)
    {
        if (element % 2 != 0)
        {
            isOdd = false;
            break;
        }
    }
    if (isOdd)
        std::cout << "All the elements are odd numbers.\n";
}

void AllOf_iterators()
{
    std::array<int,8> foo = {3,5,7,11,13,17,19,23};
    bool isOdd = true;
    
    for (std::array<int,8>::iterator element = foo.begin(); element != foo.end(); ++element)
    {
        if (*element % 2 != 0)
        {
            isOdd = false;
            break;
        }
    }
    if (isOdd)
        std::cout << "All the elements are odd numbers.\n";
    
}
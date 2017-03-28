//
//  stack_iiibB.cpp
//  stack_implementations
//
//  Created by Tyree Stevenson on 3/26/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include "stack_iiibB.hpp"
#include <iostream>

using namespace std;
Stack_iiibB:: Stack_iiibB()
{
    length = 0;
}

void Stack_iiibB:: Push(int data)
{
    array[MAX_SIZE1 - (length + 1)] = data;
    length++;
}

void Stack_iiibB:: Top()
{
    cout <<  array[MAX_SIZE1 - (length + 1)] << "\n";
}

int Stack_iiibB:: Pop()
{
    int orginal_length = length;
    length--;
    return array[MAX_SIZE1 - (orginal_length + 1)];
}

int Stack_iiibB:: Size()
{
    return length;
}

bool Stack_iiibB:: Is_Empty()
{
    return length == 0;
}

bool Stack_iiibB:: Is_Full()
{
    return length == MAX_SIZE1;
}

//
//  stack_iiiaB.cpp
//  stack_implementations
//
//  Created by Tyree Stevenson on 3/25/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include "stack_iiiaB.hpp"
#include <iostream>

using namespace std;
Stack_iiiaB::Stack_iiiaB()
{
    length = 0;
}

void Stack_iiiaB::Push(int data)
{
    array[length] = data;
    length++;
}

int Stack_iiiaB::Pop()
{
    int orginal_length = length;
    length--;
    return array[orginal_length - 1];
}

bool Stack_iiiaB:: Is_Empty()
{
    return length == 0;
}

bool Stack_iiiaB:: Is_Full()
{
    return length == MAX_SIZE;
}

int Stack_iiiaB:: Size()
{
    return length;
}

void Stack_iiiaB:: Top()
{
    cout << array[length - 1] << "\n";
}

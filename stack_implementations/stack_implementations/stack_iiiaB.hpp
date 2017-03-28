//
//  stack_iiiaB.hpp
//  stack_implementations
//
//  Created by Tyree Stevenson on 3/25/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#ifndef stack_iiiaB_hpp
#define stack_iiiaB_hpp

#include <stdio.h>

int const MAX_SIZE = 4;
class Stack_iiiaB
{
public:
    
    Stack_iiiaB();
    bool Is_Empty();
    bool Is_Full();
    void Push(int data);
    int Pop();
    void Top();
    int Size();
    
private:
    
    int length;
    int array[MAX_SIZE];
};
#endif /* stack_iiiaB_hpp */

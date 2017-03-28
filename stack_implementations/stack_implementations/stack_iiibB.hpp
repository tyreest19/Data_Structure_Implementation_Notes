//
//  stack_iiibB.hpp
//  stack_implementations
//
//  Created by Tyree Stevenson on 3/26/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#ifndef stack_iiibB_hpp
#define stack_iiibB_hpp

#include <stdio.h>

const int MAX_SIZE1 = 4;
class Stack_iiibB
{
public:
    
    Stack_iiibB();
    bool Is_Empty();
    bool Is_Full();
    void Push(int data);
    int Pop();
    void Top();
    int Size();
    
private:
    
    int length;
    int array[MAX_SIZE1];
};
#endif /* stack_iiibB_hpp */

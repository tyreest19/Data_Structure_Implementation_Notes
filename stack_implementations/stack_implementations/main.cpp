//
//  main.cpp
//  stack_implementations
//
//  Created by Tyree Stevenson on 3/25/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include <iostream>
#include <string>
#include "stack_iiiaB.hpp"
#include "stack_iiibB.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    
    Stack_iiibB stack;
    stack.Push(5);
    stack.Push(4);
    stack.Push(89);
    stack.Push(99);
    cout << stack.Pop() << "\n";
    stack.Top();
    cout << stack.Pop() << "\n";
    stack.Is_Empty();
    
    return 0;
}

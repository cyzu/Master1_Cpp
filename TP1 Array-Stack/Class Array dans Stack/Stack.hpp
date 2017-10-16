//
//  Stack.cpp
//  TP1_stack_array
//
//  Created by Chloé BENSOUSSAN on 27/09/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include "Array.cpp"


class Stack {
    
    private :
    Array pile;
    int elementsInStack = 0;
    
    public :
    
    /*
     Constructeurs & destructeur
     */
    Stack();
    Stack(int i);
    Stack(Stack const &s);
    ~Stack();
    
    /*
     Méthodes stacks
     */
    void expand(const int n);
    bool const empty();
    int const top();
    void pop();
    void push(const int i);
    int getSize();
    void const printStack();
    
};

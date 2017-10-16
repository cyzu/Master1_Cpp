//
//  Stack.cpp
//  TP1_stack
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 27/09/2017.
//  Copyright © 2017 Chloé 雪乃 BENSOUSSAN 下村. All rights reserved.
//

#include <iostream>
//#include "Stack.hpp"
//#include </Users/ChloeYukino/Documents/Master.unice/TP1_stack/Array.h>

class Stack {
    
    private :
    int *stack;
    int sizeStack;
    
    public :
    
    /* 
     Constructeurs et Destructeurs 
     */
    
    Stack();
    Stack(int t);
    Stack(const Stack &s);
    ~Stack ();
    
    /* 
     Fonstion expansion de la pile
     */
    
    void expand(const int n);
    
    /* 
     Fonctions Stack 
     */
    
    bool const empty();
    int const top();
    void pop();
    void push(const int i);
    int getSize();
    void const printStack();
    
};

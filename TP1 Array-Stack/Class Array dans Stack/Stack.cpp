//
//  Stack.hpp
//  TP1_stack_array
//
//  Created by Chloé BENSOUSSAN on 27/09/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>
#include "Stack.hpp"

Stack::Stack(){
    pile = Array::Array();
}
Stack::Stack(int i){
    pile = Array::Array(i);
}
Stack::Stack(Stack const &s){
    pile = Array::Array(s.pile);
}
Stack::~Stack(){
    pile.~Array();
    elementsInStack = 0;
}

void Stack::expand(const int n){
    Array newStack = Array::Array(n);
    
    for (int i = 0; i < newStack.capacity(); i++) newStack.set(i,pile.get(i));
    pile = newStack;
    newStack.~Array();
}

bool const Stack::empty(){
    return (elementsInStack == 0);

}

int const Stack::top(){
    if (empty()){
        std::cout << "The stack is empty." << std::endl;
        return -111;
    }
    return pile.get(elementsInStack-1);
}

void Stack::pop(){
    if (empty()) return;
    pile.set(elementsInStack-1, -111);
    elementsInStack--;
}

void Stack::push(const int i){
    pile.set(elementsInStack, i);
    elementsInStack++;
}

int Stack::getSize(){
    return elementsInStack;
}

void const Stack::printStack(){
    printf("Pile : ");
    for (int i = 0; i < elementsInStack; i++) {
        printf("%d ", pile.get(i));
    }
    printf("\n");
}

#endif /* Stack_hpp */

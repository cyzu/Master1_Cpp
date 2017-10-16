//
//  Stack.hpp
//  TP1_stack
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 27/09/2017.
//  Copyright © 2017 Chloé 雪乃 BENSOUSSAN 下村. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>
#include "Stack.cpp"

Stack::Stack(){
    stack = new int [10];
    sizeStack = 0;
    for (int i = 0; i < 10; i++) stack[i] = -111;
}

Stack::Stack(int t){
    stack = new int [t];
    sizeStack = 0;
    for (int i = 0; i < t; i++) stack[i] = -111;
}

Stack::Stack(const Stack &s){
    stack = new int [sizeof(s)];
    sizeStack = 0;
    for (int i = 0; i < s.sizeStack; i++) stack[i] = -111;
}

Stack::~Stack (){
    delete []stack;
    stack = NULL;
}

void Stack::expand(const int n){
    int *newStack = new int [n];
    for (int i = 0; i < sizeStack; i++) newStack[i] = stack[i];
    stack  = newStack;
    
    delete []newStack;
    newStack = NULL;
}

bool const Stack::empty(){
    return sizeStack == 0;
}

int const Stack::top(){
    if (!empty()) return stack[sizeStack-1];
    else std::cout << "The stack is empty." << std::endl;
    return -111;
}

void Stack::pop(){
    if (sizeStack == 0) return;
    stack[sizeStack-1] = -111;
    sizeStack--;
}

void Stack::push(const int i){
    if (sizeof(stack) == sizeStack) expand (10);
    stack[sizeStack] = i;
    sizeStack++;
}

int Stack::getSize(){
    return sizeStack;
}

void const Stack::printStack(){
    std::cout << "Stack : ";
    for (int i = sizeStack-1; i > -1; i--) {
        std::cout << stack[i] << " ";
    }
    std::cout << std::endl;
}

#endif /* Stack_hpp */

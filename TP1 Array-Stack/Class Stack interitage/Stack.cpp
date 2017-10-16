//
//  Stack.cpp
//  TP1_inheritage
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 01/10/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

Stack::Stack(): Array(){
    
}

Stack::Stack(int i):Array(i){
    
}

Stack::Stack(const Stack &s){
}

Stack::~Stack(){
    Array::~Array();
}

bool const Stack::empty(){
    return elementInStack==0;
}

int const Stack::top(){
    return get(elementInStack-1);
}

void Stack::pop(){
    if (elementInStack>0) elementInStack--;
}

void Stack::push(const int i){
    if(elementInStack == capacity()){
        expand(10);
    }
    set(elementInStack, i);
    elementInStack++;
}

int Stack::getSize(){
    return elementInStack;
}

void const Stack::printStack(){
    std::cout << "Stack : " << std::endl;
    for (int i = elementInStack-1; i >= 0; i--) {
        std::cout << get(i) << " " << std::endl;
    }
    std::cout << std::endl;
}

//
//  main.cpp
//  TP1_stack_array
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 27/09/2017.
//  Copyright © 2017 Chloé 雪乃 BENSOUSSAN 下村. All rights reserved.
//

#include <iostream>
#include "Stack.cpp"

int main(int argc, const char * argv[]) {
    
    Stack p1(10);
    
    
    p1.push(4);
    p1.push(10);
    p1.push(16);
    
    p1.printStack();
    std::cout << "empty? " << p1.empty() << std::endl;
    p1.pop();
    std::cout << "top is " << p1.top();
    
   
    return 0;
}

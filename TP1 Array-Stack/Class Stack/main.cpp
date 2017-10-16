//
//  main.cpp
//  TP1_stack
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 27/09/2017.
//  Copyright © 2017 Chloé 雪乃 BENSOUSSAN 下村. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {
    
    Stack s1(10);
    
    
    s1.push(2);
    s1.push(4);
    s1.printStack();
    std::cout <<"Top : " << s1.top() << std::endl;

    std::cout << "Pop...\n";
    s1.pop();
    
    s1.printStack();
    std::cout <<"Top : " << s1.top() << std::endl;
    
    return 0;
}

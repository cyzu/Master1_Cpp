//
//  main.cpp
//  TP1_inheritage
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 01/10/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Stack.hpp"

int main(int argc, const char * argv[]) {
    
    Stack p1(4);
    
    p1.push(4);
    p1.push(10);
    p1.push(16);
    
    p1.printStack();
    cout << "...pop..." << endl;
    p1.pop();
    cout << "top is " << p1.top() << "\n" << endl;
    
    
    p1.push(5);
    p1.push(12);
    p1.push(56);
    
    p1.printStack();
    
    return 0;

}

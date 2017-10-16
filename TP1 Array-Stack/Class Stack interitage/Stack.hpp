//
//  Stack.hpp
//  TP1_inheritage
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 01/10/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include "Array.hpp"

class Stack : public Array {
    
    private :
    int elementInStack = 0;
    
    public :
    /*
     Constructeurs / Destructeur
     */
    Stack();
    Stack(int i);
    Stack(const Stack &s);
    ~Stack();
    
    /*
     Méthodes Pile
     */
//    void expand(const int n);
    bool const empty();
    int const top();
    void pop();
    void push(const int i);
    int getSize();
    void const printStack();
};

#endif /* Stack_hpp */

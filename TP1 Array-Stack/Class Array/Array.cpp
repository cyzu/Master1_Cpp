//
//  Array.cpp
//  TP1_array
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 28/09/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include <iostream>

class Array {
    
    private :
    int *tableau;
    int sizetab;
    
    public :
    Array();
    Array (int i=10);
    Array (const Array &a);
    ~Array();
    
    void set(const int i, const int val);
    int get(const int i);
    int capacity() const;
    
    void print();
    
    void nonDecreasingSort();
    void permut (int i, int j);
    
    int operator[](const int i);
    
    void expand(const int n);
};

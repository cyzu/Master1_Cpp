//
//  Array.cpp
//  TP1_stack_array
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 27/09/2017.
//  Copyright © 2017 Chloé 雪乃 BENSOUSSAN 下村. All rights reserved.
//


class Array {
    
    protected :
    int *tableau;
    int sizetab;
    
    public :
    
    /*
     Constructors & Destructor
     */
    Array();
    Array (int i);
    Array (const Array &a);
    ~Array();
    
    /*
     Getter & Setter
     */
    void set(const int i, const int val);
    int get(const int i);
    
    /*
     Other functions
     */
    int capacity() const;
    void print();
    void expand(const int n);
    
    /*
     Sort
     */
    void nonDecreasingSort();
    void permut (int i, int j);
    
    /*
     Redefiniton d'operateur
     */
    int operator[](const int i);
    
    
};


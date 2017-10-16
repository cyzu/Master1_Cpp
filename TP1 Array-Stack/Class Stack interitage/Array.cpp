//
//  Array.hpp
//  TP1_stack_array
//
//  Created by Chloé BENSOUSSAN on 27/09/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <iostream>
#include "Array.hpp"


Array::Array(){
    tableau = new int [10];                                 /* <==> sizetab(10); tableau(new int [10]); EN C++ */
    sizetab = 10;
    for (int z = 0; z < sizetab; z++) tableau[z] = -111;
}

Array::Array (int i){
    tableau = new int [i];
    sizetab = i;
    for (int z = 0; z < sizetab; z++) tableau[z] = -111;
}

Array::Array (const Array &a){
    tableau = new int [a.sizetab];
    sizetab = a.sizetab;
    for (int z = 0; z < a.sizetab; z++) tableau[z] = -111;
}

Array::~Array(){
    delete []tableau;
    tableau = NULL;
}

void Array::set(const int i, const int val){
    tableau[i] = val;
}

int Array::get(const int i){
    return tableau[i];
}

int Array::capacity() const{
    return sizetab;
}

void Array::print(){
    for (int i = 0; i < sizetab; i++) {
        std::cout << "tableau[" << i << "] = " << tableau[i] << std::endl;
    }
}

void Array::nonDecreasingSort(){
    for (int i = sizetab-1; i > 0; i--) {
        for (int j = 0; j <= (i-1); j++) {
            if (tableau[j] > tableau[i]) permut(i,j);
        }
    }
}

void Array::permut (int i, int j){
    int tmp = tableau[i];
    tableau[i] = tableau[j];
    tableau[j] = tmp;
}

int Array::operator[](const int i){
    return get(i);
}

void Array::expand(const int n){
    int *newTableau = new int [capacity() + n];
    for (int i = 0; i < sizetab; i++) newTableau[i] = tableau[i];
    sizetab = capacity() + n;
    
    delete [] tableau;
    tableau = newTableau;
    newTableau = NULL;
}



#endif /* Array_hpp */

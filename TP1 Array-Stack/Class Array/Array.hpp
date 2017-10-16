//
//  Array.hpp
//  TP1_array
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 28/09/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>
#include "Array.cpp"


Array::Array(){
    tableau = new int [10];
    sizetab = 10;
    
    for (int z = 0; z < sizetab; z++) tableau[z] = 0;
}

Array::Array (int i){
    tableau = new int [i];
    sizetab = i;
    
    for (int z = 0; z < sizetab; z++) tableau[z] = 0;
}

Array::Array (const Array &a){
    tableau = new int [a.sizetab];
    sizetab = a.sizetab;
    for (int z = 0; z < a.sizetab; z++) tableau[z] = 0;
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
    int *newTableau = new int [n];
    for (int i = 0; i < sizetab; i++) newTableau[i] = tableau[i];
    sizetab = n;
    tableau = newTableau;
}


#endif /* Array_hpp */

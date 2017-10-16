//
//  main.cpp
//  TP1_array
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 28/09/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include <iostream>
#include "Array.hpp"

int main() {
    
    Array array(5);
    array.set(0,4);
    array.set(1,34);
    array.set(2,599);
    array.set(3,1);
    array.set(4,10);
    
//    array.print();
    std::cout << "valeur de 3 : " << array.get(3) << std::endl;
    
    int j = array[3];
    std::cout << "valeur de j : " << j << std::endl;
    //array.nonDecreasingSort();
//    array.print();
    
    
//    std::cout << "\nExpansion du tableau...\n" << std::endl;
//    array.expand(8);
//    array.set(5,3);
//    array.set(7,4);
//    array.print();
//    
    
};

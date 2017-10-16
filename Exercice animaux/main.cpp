//
//  main.cpp
//  exercice_cours
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 11/10/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include <iostream>
#include "Animal.cpp"

int main(int argc, const char * argv[]) {
    Animal **animals = new Animal*[5];
    
    animals[0] = new Chat();
    animals[1] = new Coq();
    animals[2] = new Vache();
    animals[3] = new Chat();
    animals[4] = new Chien();
    
    for (int i = 0; i<5; i++) {
        animals[i]->s_exprime();
        std::cout << std::endl;
    }
    for (int i = 0; i<5; i++) {
        delete animals[i];
    }
    delete [] animals;
}

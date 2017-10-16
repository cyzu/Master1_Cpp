//
//  Animal.cpp
//  exercice_cours
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 11/10/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include <stdio.h>

class Animal{
    public:
    Animal(){
        printf("__%s\n", __FUNCTION__);
    }
    
    virtual ~Animal(){
        printf("__%s\n", __FUNCTION__);
    }
    
    virtual void s_exprime() = 0;
};

class Coq : public Animal{
    public :
    Coq(){
        printf("__%s\n", __FUNCTION__);
    }
    
    ~Coq(){
        printf("__%s\n", __FUNCTION__);
    }
    
    void s_exprime(){
        printf("Cocorico !");
    }
};

class Chat : public Animal{
    
    public :
    Chat(){
        printf("__%s\n", __FUNCTION__);
    }
    
    ~Chat(){
        printf("__%s\n", __FUNCTION__);
    }
    
    void s_exprime(){
        printf("Miaouuu");
    }
};

class Vache : public Animal{
    
    public :
    Vache(){
        printf("__%s\n", __FUNCTION__);
    }
    
    ~Vache(){
        printf("__%s\n", __FUNCTION__);
    }
    
    void s_exprime(){
        printf("Meuuuuh");
    }
};

class Chien : public Animal{
    
    public :
    Chien(){
        printf("__%s\n", __FUNCTION__);
    }
    
    ~Chien(){
        printf("__%s\n", __FUNCTION__);
    }
    
    void s_exprime(){
        printf("ouaf ouaf");
    }
};

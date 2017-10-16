//
//  Str.hpp
//  TP2-str
//
//  Created by Chloé 雪乃 BENSOUSSAN 下村 on 02/10/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#ifndef Str_hpp
#define Str_hpp

class Str {
    
    private:
    char *chaine;
    int longueur;
    
    public :
    Str();
    Str(const char *s);
    Str(const Str &s);
    ~Str();
    
    int getSize();
    static void test();
    
    /* Affiche/Renvoie la chaine de caractère */
    void print();
    char* ch();
    
    /* Affiche l'adresse de l'objet */
    void printDebug();
    
    /* Concatène la chaine courante avec s */
    void concat(int size, const char *s);
    void concat2(Str str);
    Str concat3(Str str);
    Str& concat4(Str& str);
    
    /* Surcharge des opérateurs */
    Str& operator+(Str str);
//    friend Str& operator+(Str str);
    Str& operator=(Str str);
    
};

#endif /* Str_hpp */

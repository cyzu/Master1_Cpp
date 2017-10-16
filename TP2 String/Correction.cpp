//
//  Correction.cpp
//  TP2-str
//
//  Created by Chloé BENSOUSSAN on 04/10/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include "Correction.hpp"

class Str{
    private :
    char *tch;
    int l;
    
    public :
    Str() : tch(new char[1]), l(0) {
        printf("...appel %s...\n", __FUNCTION__);
        tch[0] = '\0';
    }
    
    Str(char* ch){
        printf("...appel %s...\n", __FUNCTION__);
        l = strlen(ch);
        tch = new char[ l+1 ];
        strcpy(tch, ch);
    }
    
    Str(const Str& s): tch(new char[s.l + 1]), l(s.l){
        printf("...appel %s...\n", __FUNCTION__);
        strcpy(tch, s.tch);
    }
    
    ~Str(){
        printf("...appel %s...\n", __FUNCTION__);
        delete[]tch;
        tch = NULL;
    }
    
    char* ch() return tch;
    void print() cout << tch << endl;
    void printDebug() cout << this << endl;
    
    void concat(char* ch){
        int lch = strlen(ch);
        char* newch = new char[l + lch + 1]; // pour mettre '\0' à la fin
        
        strcpy(newch, tch);
        strcat(newch, ch);
        delete[] tch;
        
        tch = newch;
        l += lch;
    }
    
    /* Str b => création d'un objet temporaire tmp,
     copie de b dans tmp (constructeur par recopie)
     destructeur de tmp */
    void concat2(Str b){
        concat(b.ch());
    }
    
    /* b = a.concat3(c) marche grace à operator=() */
    Str concat3(Str b){
        Str obj(ch());
        obj.concat2(b);
        return obj;
    }
    
    Str concat3(Str& b){
        //modifie globale de b => moins de constructeur copie
    }
    
    
    Str& operator=(const Str& x){
        delete []tch;
        tch = new char[x.l];
        strcpy(tch, x.tch);
        l = x.l;
        
        return *this;
    }
    
    
    /* -- CONCLUSION --
     1) constructeur par recopie ==> refaire la même chose avec opérateur=() !!!
     2) le principe d'objet crée des objets sans que le programmeur sache !!!!
     3) Ne pas tout écrire en C++, Java simplifie plein de chose, mais pas tout
        Mélanger les deux
     
     */
};

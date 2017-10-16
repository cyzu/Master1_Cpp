//
//  Str.cpp
//  TP2-str
//
//  Created by Chloé BENSOUSSAN on 02/10/2017.
//  Copyright © 2017 Chloé BENSOUSSAN. All rights reserved.
//

#include "Str.hpp"
#include <iostream>
using namespace std;

Str::Str(){
    printf("Appel constructeur simple %s\n", __FUNCTION__);
    chaine = new char[1];
    longueur = 1;
    chaine[0] = '\0';
}

Str::Str(const char *s){
    printf("Appel constructeur par chaine %s\n", __FUNCTION__);
    chaine = new char[strlen(s)];
    longueur = static_cast<int> (strlen(s)) + 1;
    
    for (int i = 0; i < longueur - 1; i++) chaine[i] = s[i];
    chaine[longueur - 1] = '\0';
}

Str::Str(const Str &s){
    printf("Appel constructeur par recopie %s\n", __FUNCTION__);
    
    chaine = new char[s.longueur];
    longueur = s.longueur;
    
    for (int i = 0; i < longueur; i++) chaine[i] = s.chaine[i];
}

Str::~Str(){
    printf("...appel %s...\n", __FUNCTION__);
    delete []chaine;
    chaine = NULL;
}

int Str::getSize(){
    return longueur;
}

void Str::test(){
    Str a("un");
    Str b("deux");
    Str c("trois");
    Str resultat;
    
    //    a.concat(b.getSize(), b.ch());
    //    a.concat(c.getSize(), c.ch());
    //    a.print();
    //
//    a.concat2(b);
//    a.print();
    
//    b.concat3(c);
//    a.concat(b.getSize(), b.ch());
//    b = a.concat3(c);
    //    a.concat4(d);
//        b = b.concat4(c);
    
//        resultat = a+b;
//        resultat = c+"hum";
//         resultat = "hum"+b;
    //    resultat = "un"+"peu";
    
    b = b;

    b.print();

}

void Str::print(){
    cout << "\"";
    for (int i = 0; i<longueur; i++) cout << chaine[i];
    cout << "\""<< endl;
}

char* Str::ch(){
    return chaine;
}

void Str::printDebug(){
    cout << "Debug l'adresse de l'objet : " << this << endl;
}

void Str::concat(int size, const char *s){
    printf("...appel %s...\n", __FUNCTION__);
    
    int newSize = longueur + size + 1;
    char *newChaine = new char[newSize];
    int j = 0;
    
    for (int i = 0; i < newSize; i++) {
        if (i < longueur) newChaine[i] = chaine[i];
        else if (i == longueur) newChaine[i] = ' ';
        else {
            newChaine[i] = s[j];
            j++;
        }
    }
    delete [] chaine;
    chaine = newChaine;
    longueur = newSize;
}

void Str::concat2(Str str){
    printf("...appel %s...\n", __FUNCTION__);
    concat(str.getSize(), str.ch());
}

Str Str::concat3(Str str){
    printf("...appel %s...\n", __FUNCTION__);

    Str newStr(*this);
    newStr.concat2(str);
    
    return newStr;
}

Str& Str::concat4(Str& str){
    printf("...appel %s...\n", __FUNCTION__);
    
    Str newStr = new char[getSize() + str.getSize()];
    newStr.concat2(*this);
    newStr.concat2(str);
    
//    newStr.print();
    return newStr;
}


Str& Str::operator+(Str str){
    printf("...appel %s...\n", __FUNCTION__);
    
    return this->concat4(str);
}

/*
friend Str& Str::operator+(Str str){
    printf("...appel friend %s...\n", __FUNCTION__);
    
    return this->concat4(str);
}*/

Str& Str::operator=(Str str){
    std::swap(chaine, str.chaine);
    std::swap(longueur, str.longueur);
    
    return *this;
}

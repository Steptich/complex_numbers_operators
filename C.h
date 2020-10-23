//
// Created by stept on 23.10.2020.
//

#ifndef COMPLEX_NUMBERS_OPERATORS_C_H
#define COMPLEX_NUMBERS_OPERATORS_C_H
#include "typ.h"
#include <string>

class C {
    Cislo re, im;
public:
    C();
    C(Cislo re0, Cislo im0);
    void setRe(Cislo c) { re = c; }
    void setIm(Cislo c) { im = c; }
    Cislo getRe() const { return re; }
    Cislo getIm() const { return im; }
    void tisk() const ;
    C soucet (C a); //jako metoda, pricti k memmu cislo komplex a;
    bool operator==(C &a); //odkaz lepsi protoze nemusi kopirovat
    bool operator!=(C &a);
    //C operator+(C a); //operator jako metoda
    Cislo& operator[](std::string index);
};

C soucet(C a, C b); //jako funkce soucet
C operator+(C a, C b); //operator jako fce
C operator-(C a, C b); //rozdil komplex cisel, binarni operator
//overload fce protoze jine parametry
C operator-(C a); //opacne komplex cislo, unarni operator

std::ostream & operator << (std::ostream &ost, C &c); //pretizeni vlozeni do proudu
#endif //COMPLEX_NUMBERS_OPERATORS_C_H

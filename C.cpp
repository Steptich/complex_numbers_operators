//
// Created by stept on 23.10.2020.
//

#include "C.h"
#include <iostream>

C::C()
: re(0), im(0)
{}

C::C(Cislo re0, Cislo im0)
: re(re0), im(im0)
{}
C soucet(C a, C b)
{
    C c(a.getRe()+b.getRe(), a.getIm()+b.getIm());
    return c;
}

C C::soucet(C a) {
    C c(this->getRe()+ a.getRe(), this->getIm() +a.getIm());
    return c;
}
void C::tisk() const {
    if (!getRe() && !getIm()) { //pokud obe dve nuly tak by dalo true
        std::cout << 0;
        return;
    }
    if(getRe() !=0)
    {
        std::cout << getRe();
    }
    if (getIm() >0) {
        std::cout << "+";
    }
    if (getIm()!=0)
    {
        std::cout << getIm() << "i";
    }
}

bool C::operator==(C &a) {
    return (this->getRe()==a.getRe()&& this->getIm()==a.getIm());
    }

bool C::operator!=(C &a) { //vlastne staci predchozi
    //return !this->operator==(a);   //to stejne
    return !(*this == a); //porovna soucasny s a
}

Cislo &C::operator[](std::string index) {
    if(index == "re")
    {
        return re;
    }
    else if (index == "im")
    {
        return im;
    }
}

C operator+(C a, C b){ //prepisu operator +
    return soucet(a,b);
}

C operator-(C a, C b)
{
    C c(a.getRe()-b.getRe(), a.getIm()-b.getIm());
    //sice pouzivam - ale to je jiz mezi cisly
    return c;
}
C operator-(C a)
{
    return  C(-a.getRe(),-a.getIm()); //da opacne slozky
}

std::ostream & operator << (std::ostream &ost, C &c)
{   //ost je vystup
    if(!c.getRe() && ! c.getIm()) //pokud obe dve nulove
    {
        ost << "0";
        return ost;
    }
    if(c.getRe() !=0)
    {
        ost << c.getRe();
    }
    if(c.getIm() >0)
    {
        ost << "+";
    }
    if(c.getIm() !=0){
        ost << c.getIm() << "i";
    }
    return ost;
}
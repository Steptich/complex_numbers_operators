#include <iostream>

#include "C.h"

int main() {
    C a (1,2),b(2,1),  c ;
    //c= a+b; //c = a.operator+(b) //nastejno ale mohu psat jako v matematice, metoda
    c = a+b; // c=operator+(a,b) //pretizeni operatoru jako fce
    //c = soucet(a,b); //fce
    //c = a.soucet(b); //metoda
    //cout << c << "\n"
    c.tisk();
    std::cout << "\nRealna casxt: " << c["re"] << "\n";
    c["im"]= 6; //vlastne dela pristup misto potrebnych metod
    c.tisk();
    std::cout << "\n";
    std::cout << c; //diky pretizenemu operatoru
    return 0;
}

#include "../inc/DatePersonale.hpp"
#include<string>
#include<iostream>

namespace datepersonale{

    DatePersonale::DatePersonale(){};
    DatePersonale::DatePersonale(const std::string cnpP, const std::string serieP):
            cnp(cnpP),
            serieBuletin(serieP) {};

    void DatePersonale::printeazaDetalii(){
        std::cout<<"CNP: "<<cnp<<" - Serie buletin: "<<serieBuletin<<std::endl;
    }
}
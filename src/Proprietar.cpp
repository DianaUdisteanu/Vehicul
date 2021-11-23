#include "../inc/Proprietar.hpp"
#include<string>
#include<iostream>

namespace proprietar{
    Proprietar::Proprietar(const std::string numeP, const std::string prenumeP, unsigned int varstaP, const std::string adresaP):
            nume(numeP),
            prenume(prenumeP),
            varsta(varstaP),
            adresa(adresaP) {};

    const std::string Proprietar::printNameOfTheOwner(){
            return nume + " " + prenume;
    }
}
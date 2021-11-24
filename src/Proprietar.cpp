#include "../inc/Proprietar.hpp"
#include<string>
#include<iostream>

namespace proprietar{

    Proprietar::Proprietar(){}

    Proprietar::Proprietar(const std::string numeP, const std::string prenumeP, unsigned int varstaP, const std::string adresaP):
            nume(numeP),
            prenume(prenumeP),
            varsta(varstaP),
            adresa(adresaP) {};

     Proprietar& Proprietar::operator=(const Proprietar &prop){
        if(this == &prop) return *this; // pentru a se evita self-assignment; fara identity test, *this si prop pot fi acelasi obiect
        nume = prop.nume;
        prenume = prop.prenume;
        varsta = prop.varsta;
        adresa = prop.adresa;
        return *this;
    }

    const std::string Proprietar::printNameOfTheOwner(){
            return nume + " " + prenume;
    }
}
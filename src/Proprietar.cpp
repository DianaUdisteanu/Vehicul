#include "../inc/Proprietar.hpp"
#include "../inc/DatePersonale.hpp"
#include<string>
#include<iostream>

namespace proprietar{

    Proprietar::Proprietar(){}

    Proprietar::Proprietar(const std::string numeP, const std::string prenumeP, unsigned int varstaP, const std::string adresaP):
            nume(numeP),
            prenume(prenumeP),
            varsta(varstaP),
            adresa(adresaP) {};

    const std::string Proprietar::printNameOfTheOwner(){
            return nume + " " + prenume;
    }

    void Proprietar::adaugaDetalii(datepersonale::DatePersonale &d){
        this->date = d;
    }

}
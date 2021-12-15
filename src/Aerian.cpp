#include "../inc/Proprietar.hpp"
#include "../inc/Vehicul.hpp"
#include "../inc/Aerian.hpp"
#include "../inc/Combustibil.hpp"

#include<string>
#include<iostream>
#include<memory>

namespace aerian{
    Aerian::Aerian() : Vehicul(){}

    Aerian::Aerian(const std::string marca, unsigned int anFabricatie, proprietar::Proprietar *proprietar, unsigned int viteza) : Vehicul(marca, anFabricatie, proprietar), viteza(viteza) {};

    Aerian::Aerian(const Aerian&aer):
        Vehicul(aer),               // se invoca copy constructorul clasei de baza pentru a copia toate partile obiectului
        viteza(aer.viteza){};

    Aerian& Aerian::operator=(const Aerian &aerian){
        if(this == &aerian) return *this;    // pentru a preveni ca *this si aerian sa fie acelasi obiect
        Vehicul::operator=(aerian);     //se atribuie partile clasei de baza
        viteza=aerian.viteza;
        return *this;
    }

    void Aerian::printViteza(){
            std::cout<<"Sunt un vehicul aerian si viteza mea este: "<<viteza<<std::endl;
    }

    void Aerian::alimenteazaVehicul(){
        std::shared_ptr<combustibil::Combustibil> com (combustibil::Combustibil::incarcaCombustibil('k')); //com pointeaza catre obiectul returnat de incarcaCombustibil
        std::cout<<"Am alimentat cu "<<com->printCombustibil();
    }
}
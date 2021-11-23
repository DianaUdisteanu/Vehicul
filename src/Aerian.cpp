#include "../inc/Proprietar.hpp"
#include "../inc/Vehicul.hpp"
#include "../inc/Aerian.hpp"
#include<string>
#include<iostream>

namespace aerian{
    Aerian::Aerian(const std::string marca, unsigned int anFabricatie, proprietar::Proprietar *proprietar, unsigned int viteza) : Vehicul(marca, anFabricatie, proprietar), viteza(viteza) {};

    Aerian::Aerian(const Aerian&aer):
        Vehicul(aer),
        viteza(aer.viteza){};

    void Aerian::printViteza(){
            std::cout<<"Sunt un vehicul aerian si viteza mea este: "<<viteza<<std::endl;
    }
}
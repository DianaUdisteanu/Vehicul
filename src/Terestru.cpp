#include "../inc/Proprietar.hpp"
#include "../inc/Vehicul.hpp"
#include "../inc/Terestru.hpp"
#include "../inc/Combustibil.hpp"
#include "./Combustibil.cpp"

#include<string>
#include<iostream>
#include <memory>

namespace terestru{
    Terestru::Terestru(const std::string marca, unsigned int anFabricatie, proprietar::Proprietar *proprietar) : Vehicul(marca, anFabricatie, proprietar) {};

    void Terestru::printMyType(){
            std::cout<<"Sunt un vehicul terestru!"<<std::endl;
    }

    void alimenteazaVehicul(){
        std::shared_ptr<combustibil::Combustibil> com (combustibil::incarcaCombustibil('c')); //com pointeaza catre obiectul returnat de incarcaCombustibil
        std::cout<<": Am alimentat"<<marca<<" cu "<<com->printCombustibil();
    }
}
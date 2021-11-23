#include "../inc/Proprietar.hpp"
#include "../inc/Vehicul.hpp"
#include "../inc/Terestru.hpp"
#include<string>
#include<iostream>

namespace terestru{

    Terestru::Terestru(const std::string marca, unsigned int anFabricatie, proprietar::Proprietar *proprietar) : Vehicul(marca, anFabricatie, proprietar) {};

    void Terestru::printMyType(){
            std::cout<<"Sunt un vehicul terestru!"<<std::endl;
    }
}
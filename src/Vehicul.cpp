#include "../inc/Proprietar.hpp"
#include "../inc/Vehicul.hpp"
#include<string>
#include<iostream>

namespace vehicul{

    Vehicul::Vehicul(){
            marca = "Neutru";
            anFabricatie = 2000;
            proprietar = new proprietar::Proprietar("Dan", "Andrei", 45, "Iasi");
    }

    Vehicul::Vehicul(const std::string marcaV, unsigned int anFabricatieV, proprietar::Proprietar *proprietarV):
            marca(marcaV),
            anFabricatie(anFabricatieV),
            proprietar(proprietarV) {};
    // constructorul principal

    Vehicul::Vehicul(const Vehicul &veh):
            marca(veh.marca),
            anFabricatie(veh.anFabricatie),
            proprietar(veh.proprietar) {};
    // copy constructor

    void Vehicul::print(){
            std::cout<<"Marca: "<<marca<<std::endl<<"An fabricatie: "<<anFabricatie<<std::endl<<"Proprietar: "<<proprietar->printNameOfTheOwner()<<std::endl;
    }

    const std::string Vehicul::returnMarca(){
            return marca;
    }

    Vehicul& Vehicul::operator=(const Vehicul &veh){
        if(this == &veh) return *this;    // pentru a preveni ca *this si veh sa fie acelasi obiect
        marca = veh.marca;
        anFabricatie = veh.anFabricatie;
        delete proprietar;
        proprietar = new proprietar::Proprietar(*veh.proprietar);
        return *this;
    }
}
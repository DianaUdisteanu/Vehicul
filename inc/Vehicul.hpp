#ifndef VEHICUL_HPP
#define VEHICUL_HPP

#include "./Proprietar.hpp"
#include "./Combustibil.hpp"

#include<string>
#include<iostream>

namespace vehicul{

    class Vehicul {
    protected:
        std::string marca;
        unsigned int anFabricatie;
        proprietar::Proprietar *proprietar;

    public:
        Vehicul();

        Vehicul(const std::string, unsigned int, proprietar::Proprietar *);

        Vehicul& operator=(const Vehicul &);
         // copy assignment operator

        Vehicul(const Vehicul &);

        void print();

        const std::string returnMarca();

        virtual void alimenteazaVehicul(){}; // abstract class
    }; 

}

#endif // VEHICUL_HPP
#ifndef AERIAN_HPP
#define AERIAN_HPP

#include<string>
#include "./Proprietar.hpp"
#include "./Vehicul.hpp"
#include "./Combustibil.hpp"

namespace aerian{

    class Aerian: public vehicul::Vehicul {
    
    private:
        unsigned int viteza;

    public:
        Aerian();
        
        Aerian(const std::string, unsigned int, proprietar::Proprietar *, unsigned int);

        Aerian(const Aerian&);

        Aerian& operator=(const Aerian &);

        void printViteza();
        void alimenteazaVehicul();
    };
}

#endif // AERIAN_HPP
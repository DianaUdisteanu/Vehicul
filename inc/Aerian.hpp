#ifndef AERIAN_HPP
#define AERIAN_HPP

#include<string>
#include "./Proprietar.hpp"
#include "./Vehicul.hpp"

namespace aerian{

    class Aerian: public vehicul::Vehicul {
    
    private:
        unsigned int viteza;

    public:
        Aerian(const std::string, unsigned int, proprietar::Proprietar *, unsigned int);

        Aerian(const Aerian&);

        void printViteza();
    };
}

#endif // AERIAN_HPP
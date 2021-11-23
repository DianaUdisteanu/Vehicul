#ifndef TERESTRU_HPP
#define TERESTRU_HPP

#include "./Vehicul.hpp"
#include "./Proprietar.hpp"
#include <string>

namespace terestru{

    class Terestru: public vehicul::Vehicul {
    public:
        Terestru(const std::string, unsigned int, proprietar::Proprietar *);
        void printMyType();
    };

}

#endif // TERESTRU_HPP
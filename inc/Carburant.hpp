#ifndef CARBURANT_HPP
#define CARBURANT_HPP

#include "./Combustibil.hpp"
#include <string>


namespace carburant{

    class Carburant: public combustibil::Combustibil {
    public:
        std::string printCombustibil();
    };

}

#endif // CARBURANT_HPP
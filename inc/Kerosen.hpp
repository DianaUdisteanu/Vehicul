#ifndef KEROSEN_HPP
#define KEROSEN_HPP

#include "./Combustibil.hpp"
#include <string>

namespace kerosen{

    class Kerosen: public combustibil::Combustibil {
    public:
        std::string printCombustibil();
    };

}

#endif // KEROSEN_HPP
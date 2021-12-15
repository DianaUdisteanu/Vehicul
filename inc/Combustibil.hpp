#ifndef COMBUSTIBIL_HPP
#define COMBUSTIBIL_HPP

#include<string>
#include<iostream>

namespace combustibil{

    class Combustibil {

        public:
        virtual std::string printCombustibil() = 0; // abstract class
    }; 
    Combustibil* incarcaCombustibil(char);
}

#endif // COMBUSTIBIL_HPP
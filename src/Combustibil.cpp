#include<string>
#include<iostream>
#include "../inc/Combustibil.hpp"
#include "../inc/Kerosen.hpp"
#include "../inc/Carburant.hpp"

namespace combustibil{
    Combustibil* Combustibil::incarcaCombustibil(char c){
        if(c == 'k') return new kerosen::Kerosen();
        else return new carburant::Carburant();
    }
}
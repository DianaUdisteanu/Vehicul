#ifndef PROPRIETAR_HPP
#define PROPRIETAR_HPP

#include<string>
namespace proprietar {

class Proprietar {
    protected:
        std::string nume;
        std::string prenume;
        unsigned int varsta;
        std::string adresa;
    
    public:
        Proprietar(const std::string, const std::string, unsigned int, const std::string);
        const std::string printNameOfTheOwner();
};

}

#endif // PROPRIETAR_HPP
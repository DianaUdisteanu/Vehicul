#ifndef PROPRIETAR_HPP
#define PROPRIETAR_HPP

#include<string>
#include<memory>
#include "./DatePersonale.hpp"
namespace proprietar {

class Proprietar {
    private:
        std::string nume;
        std::string prenume;
        unsigned int varsta;
        std::string adresa;
    
    public:
        Proprietar();
        Proprietar(const std::string, const std::string, unsigned int, const std::string);
        datepersonale::DatePersonale date;

        const std::string printNameOfTheOwner();
        void adaugaDetalii(datepersonale::DatePersonale &date);

};

}

#endif // PROPRIETAR_HPP
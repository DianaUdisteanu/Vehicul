#ifndef DATEPERSONALE_HPP
#define DATEPERSONALE_HPP

#include<string>
#include<memory>
namespace datepersonale {

class DatePersonale {
    private:
        std::string cnp;
        std::string serieBuletin;
    
    public:
        DatePersonale();
        DatePersonale(std::string, std::string);
        void printeazaDetalii();
};

}

#endif // DATEPERSONALE_HPP
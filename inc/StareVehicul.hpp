#ifndef STAREVEHICUL_HPP
#define STAREVEHICUL_HPP

#include<string>
#include "./Vehicul.hpp"

namespace stare {

class StareVehicul {
    private:
        bool stare;
        vehicul::Vehicul *vehicul;

        StareVehicul(const StareVehicul&);

        StareVehicul& operator=(const StareVehicul&);
    
    public:
        StareVehicul(vehicul::Vehicul *, bool);
        StareVehicul();
        void prezintaStare();
};

}

#endif // STAREVEHICUL_HPP
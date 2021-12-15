#ifndef STAREVEHICUL_HPP
#define STAREVEHICUL_HPP

#include<string>
#include "./Vehicul.hpp"

namespace stare {

class StareVehicul {
    private:
        vehicul::Vehicul *vehicul;

        StareVehicul(const StareVehicul&);

        StareVehicul& operator=(const StareVehicul&);
    
    public:
        explicit StareVehicul(vehicul::Vehicul *);
        StareVehicul();
        ~StareVehicul();
        void lockPentruReperatii(vehicul::Vehicul *);
        void unlockPentruUtilizare(vehicul::Vehicul *);
};

}

#endif // STAREVEHICUL_HPP
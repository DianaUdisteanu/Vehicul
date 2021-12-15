#include "../inc/StareVehicul.hpp"
#include "../inc/Vehicul.hpp"
#include<string>

namespace stare{
    StareVehicul::StareVehicul(vehicul::Vehicul *veh):
            vehicul(veh){
                lockPentruReperatii(veh);   // se obtine resursa si de blocheaza
            };
    StareVehicul::~StareVehicul(){
        unlockPentruUtilizare(vehicul); // se elibereaza resursa
    }

    StareVehicul::StareVehicul(){}

    void StareVehicul::lockPentruReperatii(vehicul::Vehicul *veh){
        std::cout<<"Vehiculul "<<vehicul->returnMarca()<<" necesita reparatii ";
    }
    
    void StareVehicul::unlockPentruUtilizare(vehicul::Vehicul *veh){
        std::cout<<"Vehiculul "<<vehicul->returnMarca()<<" se poate deplasa"<<std::endl;
    }

}
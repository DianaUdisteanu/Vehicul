#include "../inc/StareVehicul.hpp"
#include "../inc/Vehicul.hpp"
#include<string>

namespace stare{
    StareVehicul::StareVehicul(vehicul::Vehicul *veh, bool stareV):
            vehicul(veh),
            stare(stareV){};

    StareVehicul::StareVehicul(){}

    void StareVehicul::prezintaStare(){
            if(stare == true) {
                std::cout<<"Vehiculul "<<vehicul->returnMarca()<<" exte disponibil pentru deplasare";
            }
            else {
                std::cout<<"Vehiculul "<<vehicul->returnMarca()<<" necesita reparatii";
            }
        }
}
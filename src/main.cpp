#include "../inc/Proprietar.hpp"
#include "../inc/Vehicul.hpp"
#include "../inc/Terestru.hpp"
#include "../inc/Aerian.hpp"
#include "../inc/StareVehicul.hpp"

#include<iostream>
#include<cstring>

using namespace std;

int main(){
    proprietar::Proprietar proprietar1("Udisteanu", "Diana", 21, "Sacalaz");
    proprietar::Proprietar proprietar2("Sofran", "Sebastian", 22, "Timisoara");
    proprietar::Proprietar proprietar3("Popescu", "Alin", 30, "Timisoara"); 

    cout<<proprietar1.printNameOfTheOwner();
    cout<<std::endl;

    vehicul::Vehicul vehicul1("VW", 2009, &proprietar1); // se ia adresa argumentului cu &
    vehicul1.print();
    cout<<std::endl;

    vehicul::Vehicul vehicul2;
    std::cout<<"Vehiculul initial:"<<std::endl;
    vehicul2.print();
    cout<<std::endl;
    vehicul2 = vehicul1; // se apeleaza copy assignment operator
    std::cout<<"Vehiculul dupa copy assignment operator:"<<std::endl;
    vehicul2.print();
    cout<<std::endl;

    terestru::Terestru vehiculTer("BMW", 2018, &proprietar2);
    vehiculTer.print();
    vehiculTer.printMyType();
    cout<<std::endl;

    aerian::Aerian vehiculAer("Tarom", 2003, &proprietar3, 300);
    vehiculAer.print();
    vehiculAer.printViteza();
    cout<<std::endl;

    aerian::Aerian vehiculAerCopy(vehiculAer);
    vehiculAerCopy.printViteza();
    cout<<std::endl;

    stare::StareVehicul s1(&vehiculTer, false);
    s1.prezintaStare();
    cout<<std::endl;
    //StareVehicul s2 = s1; - eroare (nu putem copia starea vehiculului)
}
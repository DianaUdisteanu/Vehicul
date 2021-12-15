#include "../inc/Proprietar.hpp"
#include "../inc/Vehicul.hpp"
#include "../inc/Terestru.hpp"
#include "../inc/Aerian.hpp"
#include "../inc/StareVehicul.hpp"
#include "../inc/Combustibil.hpp"
#include "../inc/Kerosen.hpp"
#include "../inc/Carburant.hpp"

#include<iostream>
#include<cstring>

using namespace std;

int main(){
    proprietar::Proprietar proprietar1("Udisteanu", "Diana", 21, "Sacalaz");
    proprietar::Proprietar proprietar2("Sofran", "Sebastian", 22, "Timisoara");
    proprietar::Proprietar proprietar3("Popescu", "Alin", 30, "Timisoara"); 

    //apel copy assignment operator
    proprietar::Proprietar proprietar4;
    proprietar4 = proprietar2;
    //cout<<proprietar4.printNameOfTheOwner();
    //cout<<std::endl;

    /*vehicul::Vehicul vehicul1("VW", 2009, &proprietar1); // se ia adresa argumentului cu &
    vehicul1.print();
    cout<<std::endl;

    vehicul::Vehicul vehicul2;
    std::cout<<"Vehiculul initial:"<<std::endl;
    vehicul2.print();
    cout<<std::endl;
    vehicul2 = vehicul1; // se apeleaza copy assignment operator
    std::cout<<"Vehiculul dupa copy assignment operator fara self-assignment:"<<std::endl;
    vehicul2.print();
    cout<<std::endl;


    vehicul1 = vehicul1;
    std::cout<<"Vehiculul dupa copy assignment operator cu self-assignment:"<<std::endl;
    vehicul1.print();
    cout<<std::endl;
    */

    aerian::Aerian vehiculAer("Tarom", 2003, &proprietar3, 300);
    vehiculAer.print();
    vehiculAer.printViteza();
    vehiculAer.alimenteazaVehicul();
    cout<<std::endl;

    stare::StareVehicul s1(&vehiculAer);
    cout<<std::endl;
    cout<<std::endl;

    /*std::cout<<"Vehiculul aerian dupa copy constructor"<<std::endl;
    aerian::Aerian vehiculAerCopy(vehiculAer);
    vehiculAerCopy.print();
    vehiculAerCopy.printViteza();
    cout<<std::endl;

    aerian::Aerian vehiculAerCopy2;
    std::cout<<"Vehiculul aerian dupa apelarea constructorului gol care mosteneste constructorul gol de la vehicul"<<std::endl;
    vehiculAerCopy2.print();
    cout<<std::endl;
    std::cout<<"Vehiculul aerian dupa copy assignment opperator"<<std::endl;
    vehiculAerCopy2 = vehiculAer;
    vehiculAerCopy2.print();
    vehiculAerCopy2.printViteza();
    cout<<std::endl;
    */

    terestru::Terestru vehiculTer("BMW", 2018, &proprietar2);
    vehiculTer.print();
    vehiculTer.printMyType();
    vehiculTer.alimenteazaVehicul();
    cout<<std::endl;

    stare::StareVehicul s2(&vehiculTer);
    cout<<std::endl;
    cout<<std::endl;
}
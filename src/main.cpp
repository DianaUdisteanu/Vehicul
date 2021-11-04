#include<iostream>
#include<cstring>

using namespace std;

class Proprietar {
    private:
        string nume;
        string prenume;
        unsigned int varsta;
        string adresa;

    public:
        Proprietar(const string numeP, const string prenumeP, unsigned int varstaP, const string adresaP):
            nume(numeP),
            prenume(prenumeP),
            varsta(varstaP),
            adresa(adresaP) {};
        // constructor principal

        const string printNameOfTheOwner(){
            return nume + " " + prenume;
        }
};

class Vehicul {
    protected:
        string marca;
        unsigned int anFabricatie;
        Proprietar *proprietar;

    public:
        Vehicul(){
            marca = "Basic";
            anFabricatie = 2021;
            proprietar = new Proprietar("Dan", "Ilie", 30, "USA");
        }

        Vehicul(const string marcaV, unsigned int anFabricatieV, Proprietar *proprietarV):
            marca(marcaV),
            anFabricatie(anFabricatieV),
            proprietar(proprietarV) {};
         // constructorul principal

        Vehicul& operator=(const Vehicul &veh);
         // copy assignment operator

        Vehicul(const Vehicul &veh):
            marca(veh.marca),
            anFabricatie(veh.anFabricatie),
            proprietar(veh.proprietar) {};
        // copy constructor


        void print(){
            std::cout<<"Marca: "<<marca<<std::endl<<"An fabricatie: "<<anFabricatie<<std::endl<<"Proprietar: "<<proprietar->printNameOfTheOwner()<<std::endl;
        }

        const string returnMarca(){
            return marca;
        }
}; 

Vehicul& Vehicul::operator=(const Vehicul &veh){
    marca = veh.marca;
    anFabricatie = veh.anFabricatie;
    proprietar = veh.proprietar;
    return *this;
}

class Terestru: public Vehicul {
    public:
        Terestru(const string marca, unsigned int anFabricatie, Proprietar *proprietar) : Vehicul(marca, anFabricatie, proprietar) {};

        void printMyType(){
            std::cout<<"Sunt un vehicul terestru!"<<std::endl;
        }
};

class Aerian: public Vehicul {
    private:
        unsigned int viteza;

    public:
        Aerian(const string marca, unsigned int anFabricatie, Proprietar *proprietar, unsigned int viteza) : Vehicul(marca, anFabricatie, proprietar), viteza(viteza) {};

        Aerian(const Aerian&aer):
            Vehicul(aer),
            viteza(aer.viteza){}; 

        void printViteza(){
            std::cout<<"Sunt un vehicul aerian si viteza mea este: "<<viteza<<std::endl;
        }
};

class StareVehicul {
    private:
        bool stare;
        Vehicul *vehicul;

        StareVehicul(const StareVehicul&);

        StareVehicul& operator=(const StareVehicul&);

    public:
        StareVehicul(Vehicul *veh, bool stareV):
            vehicul(veh),
            stare(stareV){};

        StareVehicul();

        void prezintaStare(){
            if(stare == true) {
                std::cout<<"Vehiculul "<<vehicul->returnMarca()<<" exte disponibil pentru deplasare";
            }
            else {
                std::cout<<"Vehiculul "<<vehicul->returnMarca()<<" necesita reparatii";
            }
        }
};

int main(){
    Proprietar proprietar1 = Proprietar("Udisteanu", "Diana", 21, "Sacalaz");
    Proprietar proprietar2 = Proprietar("Sofran", "Sebastian", 22, "Timisoara");
    Proprietar proprietar3 = Proprietar("Popescu", "Alin", 30, "Timisoara"); 

    cout<<proprietar1.printNameOfTheOwner();
    cout<<std::endl;

    Vehicul vehicul1 = Vehicul("VW", 2009, &proprietar1); // se ia adresa argumentului cu &
    vehicul1.print();
    cout<<std::endl;

    Vehicul vehicul2;
    std::cout<<"Vehiculul initial:"<<std::endl;
    vehicul2.print();
    cout<<std::endl;
    vehicul2 = vehicul1; // se apeleaza copy assignment operator
    std::cout<<"Vehiculul dupa copy assignment operator:"<<std::endl;
    vehicul2.print();
    cout<<std::endl;

    Terestru vehiculTer = Terestru("BMW", 2018, &proprietar2);
    vehiculTer.print();
    vehiculTer.printMyType();
    cout<<std::endl;

    Aerian vehiculAer = Aerian("Tarom", 2003, &proprietar3, 300);
    vehiculAer.print();
    vehiculAer.printViteza();
    cout<<std::endl;

    Aerian vehiculAerCopy = Aerian(vehiculAer);
    vehiculAerCopy.printViteza();
    cout<<std::endl;

    StareVehicul s1(&vehiculTer, false);
    s1.prezintaStare();
    cout<<std::endl;
    //StareVehicul s2 = s1; - eroare (nu putem copia starea vehiculului)
}
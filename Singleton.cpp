using namespace std;
#include <iostream>
#include <string>
class PerroInmortal{
    private:
    string nombre;
    public:
    PerroInmortal(){
        this->nombre ="Firulais";
    }
    string getNombre(){return this->nombre;}
    string setNombre(string nombre){this->nombre = nombre; return this->nombre;}
};

class SingletonDelPerro{
    private: 
    static PerroInmortal *instancia;
    SingletonDelPerro(){}
    public:
static PerroInmortal* getInstance(){
    if(instancia == NULL){
        instancia = new PerroInmortal();
    }
    return instancia;
}
};
// Definición de la variable estática fuera de la clase
PerroInmortal* SingletonDelPerro::instancia = NULL;
//tipo // clase a la que pertenece::nombre de la variable// = valor predeterminado

int main(){
    PerroInmortal* perrito = SingletonDelPerro::getInstance();
    cout << perrito->getNombre() << endl;

    PerroInmortal* perrito2 = SingletonDelPerro::getInstance();
    cout << perrito2->getNombre() << endl;
     cout << "Cambiando nombre del perro 2 y mostrando el perro 1"<< endl;
perrito2->setNombre("Max");
    cout << perrito->getNombre() << endl;
    cout<<"En efecto son el mismo fokin perro jajaj"<<endl;
    return 0;
}

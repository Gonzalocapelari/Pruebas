<<<<<<< HEAD
using namespace std;
#include <iostream>
#include <string>

class automovil{ //Automovil que tiene n kilometros
    private:
    float km;
    public:
    automovil(float km){
        this->km = km;
    }
    float getKm(){
        return this->km;
    }
};
class adapterAutomovil{ //clase que adapta automovil para transformarlo en un nuevo objeto que tiene yardas en lugar de km
    private:
    float yardas;
    public:
    adapterAutomovil(automovil a){
        this->yardas = a.getKm() * 1093.61;
    }
    float getYardas(){
return this->yardas;
    }
};
class interfaz{ //interfaz para aplicar adapter
    public:
void mostrarYardas(adapterAutomovil a){
    cout<<"el auto tiene en total esta cantidad de yardas: "<<a.getYardas();
}
};



int main(){
adapterAutomovil autoAdaptado( automovil (50));
interfaz interfaz;
interfaz.mostrarYardas(autoAdaptado);



    return 0;

=======
using namespace std;
#include <iostream>
#include <string>

class automovil{ //Automovil que tiene n kilometros
    private:
    float km;
    public:
    automovil(float km){
        this->km = km;
    }
    float getKm(){
        return this->km;
    }
};
class adapterAutomovil{ //clase que adapta automovil para transformarlo en un nuevo objeto que tiene yardas en lugar de km
    private:
    float yardas;
    public:
    adapterAutomovil(automovil a){
        this->yardas = a.getKm() * 1093.61;
    }
    float getYardas(){
return this->yardas;
    }
};
class interfaz{ //interfaz para aplicar adapter
    public:
void mostrarYardas(adapterAutomovil a){
    cout<<"el auto tiene en total esta cantidad de yardas: "<<a.getYardas();
}
};



int main(){
adapterAutomovil autoAdaptado( automovil (50));
interfaz interfaz;
interfaz.mostrarYardas(autoAdaptado);



    return 0;

>>>>>>> 83fd671 (cambios)
}
#include "Caballeria.h"

Caballeria::Caballeria(string sexo, int costoAlimentacion, int costoOro, int ataque, int defensa, int vida, int velocidad, int tiempoEntrenamiento, int ataqueNeto):Tropa("femenino", 50, 20, 60, 70, 80, 30,1){
    this->ataqueNeto = ataque + (velocidad/2);
}

int Caballeria::getAtaqueNeto(){
    return ataqueNeto;
}

void Caballeria::setAtaqueNeto(int ataqueNeto){
    this->ataqueNeto = ataqueNeto;
}

void Caballeria::Ataque(){
    cout<<"hi"<<endl;
}

Caballeria::~Caballeria(){

}

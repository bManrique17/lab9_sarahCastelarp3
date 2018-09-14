#include "Caballeria.h"

Caballeria::Caballeria(string sexo, int costoAlimentacion, int costoOro, int ataque, int defensa, int vida, int velocidad, int tiempoEntrenamiento, int ataqueNeto):Tropa(sexo, costoAlimentacion, costoOro, ataque, defensa, vida, velocidad,2){
    this->ataqueNeto = ataque + (velocidad/2);
}

int Caballeria::getAtaqueNeto(){
    return ataqueNeto;
}

void Caballeria::setAtaqueNeto(int ataqueNeto){
    this->ataqueNeto = ataqueNeto;
}

Caballeria::~Caballeria(){

}

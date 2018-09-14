#include "GuerrerosEspeciales.h"

GuerrerosEspeciales::GuerrerosEspeciales(string sexo, int costoAlimentacion, int costoOro, int ataque, int defensa, int vida, int velocidad, int tiempoEntrenamiento, int ataqueNeto):Tropa(sexo, costoAlimentacion, costoOro, ataque+10, defensa+10, vida, velocidad,3){
    this->ataqueNeto = -1;
}

int GuerrerosEspeciales::getAtaqueNeto(){
    return ataqueNeto;
}


void GuerrerosEspeciales::setAtaqueNeto(int vidaOponente){
    this->ataqueNeto = this->getAtaque() * (1+ (this->getVelocidad() / 5)) + vidaOponente*0.15;
}

GuerrerosEspeciales::~GuerrerosEspeciales(){

}
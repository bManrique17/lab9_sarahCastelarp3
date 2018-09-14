#include "Cuarteles.h"

Cuarteles::Cuarteles(int costoOro, int costoMadera, int costoPiedra, bool creandoSoldado, bool creandoCabelleria):Edificio(costoOro,costoMadera,costoPiedra){
    this->creandoSoldado = creandoSoldado;
    this->creandoCaballeria = creandoCaballeria;
}

bool Cuarteles::getCreandoCaballeria(){
    return creandoCaballeria;
}

void Cuarteles::setCreandoCaballeria(bool creandoCaballeria){
    this->creandoCaballeria = creandoCaballeria;
}

bool Cuarteles::getCreandoSoldado(){
    return creandoSoldado;
}

void Cuarteles::setCreandoSoldado(bool creandoSoldado){
    this->creandoSoldado = creandoSoldado;
}

Cuarteles::~Cuarteles(){

}
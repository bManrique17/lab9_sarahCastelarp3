#include "Edificio.h"

Edificio::Edificio(int costoOro, int costoMadera, int costoPiedra){
    this->costoOro = costoOro;
    this->costoMadera = costoMadera;
    this->costoPiedra = costoPiedra;
}

int Edificio::getCostoOro(){
    return costoOro;
}

void Edificio::setCostoOro(int costoOro){
    this->costoOro = costoOro;
}

int Edificio::getCostoMadera(){
    return costoMadera;
}

void Edificio::setCostoMadera(int costoMadera){
    this->costoMadera = costoMadera;
}

int Edificio::getCostoPiedra(){
    return costoPiedra;
}

void Edificio::setCostoPiedra(int costoPiedra){
    this->costoPiedra = costoPiedra;
}


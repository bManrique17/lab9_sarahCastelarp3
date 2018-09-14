#include "Castillos.h"

Castillos::Castillos(int costoOro, int costoMadera, int costoPiedra, bool enEntrenamiento):Edificio(costoOro, costoMadera,costoPiedra){
    this->enEntrenamiento = enEntrenamiento;
}

bool Castillos::getEnEntrenamiento(){
    return enEntrenamiento;
}

void Castillos::setEnEntrenamiento(bool enEntrenamiento){
    this->enEntrenamiento = enEntrenamiento;
}

Castillos::~Castillos(){
    
}
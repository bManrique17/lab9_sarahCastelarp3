#include "Aldeanos.h"

Aldeanos::Aldeanos(string sexo, int costoAlimenacion){
    this->sexo = sexo;
    this->costoAlimentacion = costoAlimenacion;
}

string Aldeanos::getSexo(){
    return sexo;
}

void Aldeanos::setSexo(string sexo){
    this->sexo = sexo;
}

int Aldeanos::getCostoAlimentacion(){
    return costoAlimentacion;
}

void Aldeanos::setCostoAlimentacion(int costoAlimenacion){
    this->costoAlimentacion = costoAlimenacion;
}

Aldeanos::~Aldeanos(){
    
}
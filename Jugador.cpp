#include "Jugador.h"
#include "Civilizacion.h"

Jugador::Jugador(string nombre, Civilizacion* civili){
    this->nombre = nombre;
    this->vectorCivi.push_back(civili);
}

string Jugador::getNombre(){
    return nombre;
}

void Jugador::setNombre(string nombre){
    this->nombre = nombre;
}

Civilizacion* Jugador::getCivilizacion(int n){
    return vectorCivi[n];
}

void Jugador::setCivilizacion(Civilizacion* civili){
    this->vectorCivi.push_back(civili);
}

int Jugador::getSizevCili(){
    return vectorCivi.size();
}



Jugador::~Jugador(){
    
}
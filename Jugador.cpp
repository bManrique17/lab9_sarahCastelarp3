#include "Jugador.h"
#include "Civilizacion.h"

Jugador::Jugador(string nombre, Civilizacion* civili){
    this->nombre = nombre;
    this->civili = civili;
}

string Jugador::getNombre(){
    return nombre;
}

void Jugador::setNombre(string nombre){
    this->nombre = nombre;
}

Civilizacion Jugador::getCivilizacion(){
    return civili;
}

void Jugador::setCivilizacion(Civilizacion civili){
    this->civili = civili;
}

Jugador::~Jugador(){
    
}
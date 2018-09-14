#include "Civilizacion.h"

Civilizacion::Civilizacion(int oro, int madera, int piedra, int alimento, int poblacionMaxima, int poblacionActual, int capacidadPoblacion){
    this->oro = oro;
    this->madera = madera;
    this->piedra = piedra;
    this->alimento = alimento;
    this->poblacionMaxima = poblacionMaxima;
    this->poblacionActual = poblacionActual;
    this->capacidadPoblacion = capacidadPoblacion;
}

int Civilizacion::getOro(){
    return oro;
}

int Civilizacion::getMadera(){
    return madera;
}

int Civilizacion::getPiedra(){
    return piedra;
}

int Civilizacion::getAlimento(){
    return alimento;
}

int Civilizacion::getPoblacionMaxima(){
    return poblacionMaxima;
}

int Civilizacion::getPoblacionActual(){
    return poblacionActual;
}

int Civilizacion::getCapacidadPoblacion(){
    return capacidadPoblacion;
}

void Civilizacion::setOro(int oro){
    this->oro = oro;
}

void Civilizacion::setMadera(int madera){
    this->madera = madera;
}

void Civilizacion::setPiedra(int piedra){
    this->piedra = piedra;
}

void Civilizacion::setAlimento(int alimento){
    this->alimento = alimento;
}

void Civilizacion::setPoblacionMaxima(int poblacionMaxima){
    this->poblacionMaxima = poblacionMaxima;
}

void Civilizacion::setPoblacionActual(int poblacionActual){
    this->poblacionActual = poblacionActual;
}

void Civilizacion::setCapacaidadPoblacion(int capacidadPoblacion){
    this->capacidadPoblacion = capacidadPoblacion;
}

Civilizacion::~Civilizacion(){
    
}
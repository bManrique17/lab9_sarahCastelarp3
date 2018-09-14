#include "Civilizacion.h"

Civilizacion::Civilizacion(string nombreCivilizacion, int oro, int madera, int piedra, int alimento, int poblacionMaxima, int poblacionActual, int capacidadPoblacion){
    this->nombreCivilizacion = nombreCivilizacion;
    this->oro = oro;
    this->madera = madera;
    this->piedra = piedra;
    this->alimento = alimento;
    this->poblacionMaxima = poblacionMaxima;
    this->poblacionActual = poblacionActual;
    this->capacidadPoblacion = capacidadPoblacion;
}

bool Civilizacion::hayCuarteles(){
    for(int i = 0; i < vectorEdificios.size(); i++){
        
    }
}
int Civilizacion::getSizevAldeanos(){
    return vectorAldeanos.size();
}

int Civilizacion::getSizevEdificios(){
    return vectorEdificios.size();
}

int Civilizacion::getSizevTropas(){
    return vectorTropas.size();
}

Aldeanos* Civilizacion::getAldeano(int n){
    return vectorAldeanos[n];
}
void Civilizacion::setAldeanos(Aldeanos* aldeanos){
    this->vectorAldeanos.push_back(aldeanos);
}

Edificio* Civilizacion::getEdificio(int n){
    return vectorEdificios[n];
}

void Civilizacion::setEdificios(Edificio* e){
    this->vectorEdificios.push_back(e);
}

Tropa* Civilizacion::getTropa(int n){
    return vectorTropas[n];
}

void Civilizacion::setTropas(Tropa* t){
    this->vectorTropas.push_back(t);
}

string Civilizacion::getNombreCivilizacion(){
    return nombreCivilizacion;
}

void Civilizacion::setNombreCivilizacion(string nombre){
    this->nombreCivilizacion = nombreCivilizacion;
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
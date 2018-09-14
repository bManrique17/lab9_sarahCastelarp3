#include "Tropa.h"

Tropa::Tropa(string sexo, int costoAlimentacion, int costoOro, int ataque, int defensa, int vida, int velocidad, int tiempoEntrenamiento){
    this->costoOro = costoOro;
    this->ataque = ataque;
    this->defensa = defensa;
    this->vida = vida;
    this->velocidad = velocidad;
    this->tiempoEntrenamiento = tiempoEntrenamiento;
}

void Tropa::toString1(){
    cout<<"Ataque: "<<ataque<<"\n Defensa: "<<defensa<<"\n Vida Restante: "<<vida<<endl;
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

int Tropa::getCostoOro(){
    return costoOro;
}

void Tropa::setCostoOro(int costoOro){
    this->costoOro = costoOro;
}

int Tropa::getAtaque(){
    return ataque;
}

void Tropa::setAtaque(int ataque){
    this->ataque = ataque;
}

int Tropa::getDefensa(){
    return defensa;
}

void Tropa::setDefensa(int defensa){
    this->defensa = defensa;
}

int Tropa::getVida(){
    return vida;
}

void Tropa::setVida(int vida){
    this->vida = vida;
}

int Tropa::getVelocidad(){
    return velocidad;
}

void Tropa::setVelocidad(int velocidad){
    this->velocidad = velocidad;
}

int Tropa::getTiempoEntrenamiento(){
    return tiempoEntrenamiento;
}

void Tropa::setTiempoEntrenamiento(int tiempoEntrenamiento){
    this->tiempoEntrenamiento = tiempoEntrenamiento;
}

Tropa::~Tropa(){

}

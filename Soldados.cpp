#include "Soldados.h"

Soldados::Soldados(string sexo,int costoAlimentacion, int costoOro, int ataque, int defensa,int vida,  int velocidad, int tiempoEntrenamiento){
    this->sexo = sexo;
    this->costoAlimentacion = costoAlimentacion;
    this->costoOro = costoOro;
    this->ataque = ataque;
    this->defensa = defensa;
    this->vida = vida;
    this->velocidad = velocidad;
    this->tiempoEntrenamiento = tiempoEntrenamiento;
}

Soldados::~Soldados(){
    
}
#ifndef TROPA_H
#define TROPA_H
#include "Aldeanos.h"
#include <iostream>
using namespace std;
#include <vector>
#include "Jugador.h"

class Tropa:public TropaGeneral{
    private:
        string sexo;
        int costoAlimentacion;
        int costoOro;
        int ataque;
        int defensa;
        int vida; 
        int velocidad;
        int tiempoEntrenamiento;

    public:
        Tropa(int,string,int,int,int,int,int,int,int);

        virtual void Ataque(int, int,int,int,vector<Jugador*>);

        string getSexo();
        void setSexo(string);

        int getCostoAlimentacion();
        void setCostoAlimentacion(int);

        int getCostoOro();
        void setCostoOro(int);

        int getAtaque();
        void setAtaque(int);

        int getDefensa();
        void setDefensa(int);

        int getVida();
        void setVida(int);

        int getVelocidad();
        void setVelocidad(int);

        int getTiempoEntrenamiento();
        void setTiempoEntrenamiento(int);

        void toString1();

        ~Tropa();





};

#endif
#ifndef SOLDADOS_H
#define SOLDADOS_H
#include "Tropa.h"
#include "TropaGeneral.h"
#include "Jugador.h"
#include <iostream>
using namespace std;

class Soldados:public Tropa{
    private:
    
    public:
        Soldados(int,string,int,int,int,int,int,int,int);
        virtual void Ataque(int,int,int,int,vector<Jugador*>);
        ~Soldados();

};

#endif
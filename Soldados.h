#ifndef SOLDADOS_H
#define SOLDADOS_H
#include "Tropa.h"
#include "Jugador.h"
#include <iostream>
using namespace std;

class Soldados:public Tropa{
    private:
    
    public:
        Soldados(string,int,int,int,int,int,int,int);
        virtual void Ataque(int,int,int,int,vector<Jugador*>);
        ~Soldados();

};

#endif
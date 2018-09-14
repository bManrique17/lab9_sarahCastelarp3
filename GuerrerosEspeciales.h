#ifndef GUERREROSESPECIALES_H
#define GUERREROSESPECIALES_H
#include "Tropa.h"
#include "Jugador.h"
#include "TropaGeneral.h"
#include <vector>
#include <iostream>
using namespace std;

class GuerrerosEspeciales: public Tropa{
    private:
        int ataqueNeto;

    public:
        GuerrerosEspeciales(int,string,int,int,int,int,int,int,int,int);

        int getAtaqueNeto();
        void setAtaqueNeto(int);

        virtual void Ataque(int, int,int,int, vector<Jugador*>);

        ~GuerrerosEspeciales();



};

#endif
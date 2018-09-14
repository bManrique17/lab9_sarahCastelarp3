#ifndef CABALLERIA_H
#define CABALLERIA_H
#include "Tropa.h"
#include "TropaGeneral.h"

class Caballeria:public Tropa{
    private:
        int ataqueNeto;
    
    public:
        Caballeria(int,string,int,int,int,int,int,int,int,int);

        int getAtaqueNeto();
        void setAtaqueNeto(int);

        virtual void Ataque(int, int,int,int, vector<Jugador*>);

        ~Caballeria();

};

#endif
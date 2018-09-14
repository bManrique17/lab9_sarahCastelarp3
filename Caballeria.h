#ifndef CABALLERIA_H
#define CABALLERIA_H
#include "Tropa.h"

class Caballeria:public Tropa{
    private:
        int ataqueNeto;
    
    public:
        Caballeria(string,int,int,int,int,int,int,int,int);

        int getAtaqueNeto();
        void setAtaqueNeto(int);

        virtual void Ataque();

        ~Caballeria();

};

#endif
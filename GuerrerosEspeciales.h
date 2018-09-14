#ifndef GUERREROSESPECIALES_H
#define GUERREROSESPECIALES_H
#include "Tropa.h"

class GuerrerosEspeciales:public Tropa{
    private:
        int ataqueNeto;

    public:
        GuerrerosEspeciales(string,int,int,int,int,int,int,int,int);

        int getAtaqueNeto();
        void setAtaqueNeto(int);

        virtual void ataque();

        ~GuerrerosEspeciales();



};

#endif
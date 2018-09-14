#ifndef SOLDADOS_H
#define SOLDADOS_H
#include "Tropa.h"

class Soldados:public Tropa{
    private:
    
    public:
        Soldados(string,int,int,int,int,int,int,int);
        virtual void ataque();
        ~Soldados();

};

#endif
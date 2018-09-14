#ifndef CUARTELES_H
#define CUARTELES_H
#include "Edificio.h"

class Cuarteles:public Edificio{
    private:
        bool creandoSoldado;
        bool creandoCaballeria;
    
    public:
        Cuarteles(int,int,int,bool,bool);

        bool getCreandoSoldado();
        void setCreandoSoldado(bool);

        bool getCreandoCaballeria();
        void setCreandoCaballeria(bool);

        ~Cuarteles();
};

#endif
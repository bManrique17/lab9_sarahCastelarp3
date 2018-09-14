#ifndef CASTILLOS_H
#define CASTILLOS_H
#include "Edificio.h"

class Castillos:public Edificio{
    private:
        bool enEntrenamiento;

    public:
        Castillos(int,int,int,bool);

        bool getEnEntrenamiento();
        void setEnEntrenamiento(bool);

        ~Castillos();
};

#endif
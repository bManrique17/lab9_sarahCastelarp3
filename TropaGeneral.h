#ifndef TROPAGENERAL_H
#define TROPAGENERAL_H
#include "Jugador.h"
#include <vector>
using std::vector;
class TropaGeneral{
    private:
        int numero;

    public:
        TropaGeneral(int);
        virtual void Ataque(int,int,int,int, vector<Jugador*>)=0;
        ~TropaGeneral();
};

#endif
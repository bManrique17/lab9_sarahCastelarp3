#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include "Civilizacion.h"
using namespace std;

class Jugador{
    private:
        string nombre;
     //   Civilizacion* civili; 
        vector<Civilizacion*> vectorCivi;

    public:
        Jugador(string, Civilizacion*);

        string getNombre();
        void setNombre(string);

        Civilizacion* getCivilizacion(int n);
        void setCivilizacion(Civilizacion*);
        int getSizevCili();

        int getCiviPerteneciente();
        
        ~Jugador();
        
};

#endif
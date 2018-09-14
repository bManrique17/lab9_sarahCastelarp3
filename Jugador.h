#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include "Civilizacion.h"
using namespace std;

class Jugador{
    private:
        string nombre;
     //   Civilizacion* civili; 
        vector<Civilizacion*> civili;

    public:
        Jugador(string, Civilizacion*);

        string getNombre();
        void setNombre(string);

        Civilizacion getCivilizacion();
        void setCivilizacion(Civilizacion);
        
        ~Jugador();
        
};

#endif
#ifndef CIVILICACION_H
#define CIVILICACION_H
#include "Aldeanos.h"
#include "Edificio.h"
#include "Tropa.h"
#include <iostream>
#include <vector>
using namespace std;

class Civilizacion{
    //la civilizacion tiene aldeanos, edificios y tropas.
    private:   
        string nombreCivilizacion;
        int oro;
        int madera;
        int piedra;
        int alimento;
        int poblacionMaxima;
        int poblacionActual;
        int capacidadPoblacion;
        vector<Aldeanos*> vectorAldeanos;
        vector<Edificio*> vectorEdificios;
        vector<Tropa*> vectorTropas;
        
    public:
        Civilizacion(string,int,int,int,int,int,int,int);

        int getSizevAldeanos();
        int getSizevEdificios();
        int getSizevTropas();

        void deleteCivilizacion();
        
        Aldeanos* getAldeano(int n);
        void setAldeanos(Aldeanos*);

        Edificio* getEdificio(int n);
        void setEdificios(Edificio*);

        Tropa* getTropa(int n);
        void setTropas(Tropa*);

        string getNombreCivilizacion();
        void setNombreCivilizacion(string);

        int getOro();
        void setOro(int);

        int getMadera();
        void setMadera(int);

        int getPiedra();
        void setPiedra(int);

        int getAlimento();
        void setAlimento(int);

        int getPoblacionMaxima();
        void setPoblacionMaxima(int);

        int getPoblacionActual();
        void setPoblacionActual(int);

        int getCapacidadPoblacion();
        void setCapacaidadPoblacion(int);

        ~Civilizacion();

};

#endif
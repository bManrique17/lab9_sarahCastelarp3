#ifndef CIVILICACION_H
#define CIVILICACION_H

class Civilizacion{
    private:   
        int oro;
        int madera;
        int piedra;
        int alimento;
        int poblacionMaxima;
        int poblacionActual;
        int capacidadPoblacion;
        
    public:
        Civilizacion(int,int,int,int,int,int,int);
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
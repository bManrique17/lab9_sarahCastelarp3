#ifndef EDIFICIO_H
#define EDIFICIO_H

class Edificio{
    private:
        int costoOro;
        int costoMadera;
        int costoPiedra;

    public:
        Edificio(int, int,int);

        int getCostoOro();
        void setCostoOro(int);

        int getCostoMadera();
        void setCostoMadera(int);

        int getCostoPiedra();
        void setCostoPiedra(int);

        ~Edificio();

};

#endif
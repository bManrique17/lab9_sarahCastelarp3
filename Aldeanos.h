#ifndef ALDEANOS_H
#define ALDEANOS_H
#include <iostream>
using namespace std;

class Aldeanos{
    private:
        string sexo;
        int costoAlimentacion;

    public:
        Aldeanos(string, int);

        string getSexo();
        void setSexo(string);

        int getCostoAlimentacion();
        void setCostoAlimentacion(int);


        ~Aldeanos();

};

#endif
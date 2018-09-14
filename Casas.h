#ifndef CASAS_H
#define CASAS_H

#include "Edificio.h"
#include <vector>
#include "Aldeanos.h"

class Casas: public Edificio{
    private:
        vector<Aldeanos*> vectorAldeanos;
    

};

#endif
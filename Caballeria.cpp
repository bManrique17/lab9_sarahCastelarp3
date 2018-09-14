#include "Caballeria.h"

Caballeria::Caballeria(string sexo, int costoAlimentacion, int costoOro, int ataque, int defensa, int vida, int velocidad, int tiempoEntrenamiento, int ataqueNeto):Tropa("femenino", 50, 20, 60, 70, 80, 30,1){
    this->ataqueNeto = ataque + (velocidad/2);
}

int Caballeria::getAtaqueNeto(){
    return ataqueNeto;
}

void Caballeria::setAtaqueNeto(int ataqueNeto){
    this->ataqueNeto = ataqueNeto;
}

void Caballeria::Ataque(int opcionAtacante1, int opcionAtacante2,int j1, int j2, vector<Jugador*> vectorJugadores){

        //orden: jugadorActual(Tropa),contricante(tropa),numero del vector del Jugdor Actual, numero del vector del contricante.
    //jugador actual
    int ataque, defensa, vida;
    ataque = vectorJugadores[j1]->getCivilizacion(0)->getTropa(opcionAtacante1)->getAtaque();
    defensa = vectorJugadores[j1]->getCivilizacion(0)->getTropa(opcionAtacante1)->getDefensa();
    vida = vectorJugadores[j1]->getCivilizacion(0)->getTropa(opcionAtacante1)->getVida();


    //agarro toda la info del contricante.
    int ataque2, defensa2, vida2;
     ataque2 = vectorJugadores[j2]->getCivilizacion(0)->getTropa(opcionAtacante2)->getAtaque();
     defensa2 = vectorJugadores[j2]->getCivilizacion(0)->getTropa(opcionAtacante2)->getDefensa();
     vida2 = vectorJugadores[j2]->getCivilizacion(0)->getTropa(opcionAtacante2)->getVida();

     //primero golpea el jugadorActual. 

    int golpe;

    golpe = vida - ataque + defensa;
    
    vectorJugadores[j2]->getCivilizacion(0)->getTropa(opcionAtacante2)->setVida(golpe);
    cout<<"El jugador #"<<j1<<"ha golpeado al jugador#"<<j2<<endl;
    cout<<"jugador #"<<j1<<": "<<endl;
    vectorJugadores[j1]->getCivilizacion(0)->getTropa(opcionAtacante1)->toString1();
    cout<<"Jugador #"<<j2<<": "<<endl;
    vectorJugadores[j1]->getCivilizacion(0)->getTropa(opcionAtacante1)->toString1();
}

Caballeria::~Caballeria(){

}

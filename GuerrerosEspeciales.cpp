#include "GuerrerosEspeciales.h"

GuerrerosEspeciales::GuerrerosEspeciales(string sexo, int costoAlimentacion, int costoOro, int ataque, int defensa, int vida, int velocidad, int tiempoEntrenamiento, int ataqueNeto):Tropa(sexo, costoAlimentacion, costoOro, ataque+10, defensa+10, vida, velocidad,3){
    this->ataqueNeto = -1;
}

int GuerrerosEspeciales::getAtaqueNeto(){
    return ataqueNeto;
}

void GuerrerosEspeciales::setAtaqueNeto(int vidaOponente){
    this->ataqueNeto = this->getAtaque() * (1+ (this->getVelocidad() / 5)) + vidaOponente*0.15;
}

void GuerrerosEspeciales::Ataque(int opcionAtacante1, int opcionAtacante2,int j1, int j2, vector<Jugador*> vectorJugadores){

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




GuerrerosEspeciales::~GuerrerosEspeciales(){

}
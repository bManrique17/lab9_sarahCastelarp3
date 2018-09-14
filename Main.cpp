#include "Aldeanos.h"
#include "Caballeria.h"
#include "Casas.h"
#include "Castillos.h"
#include "Civilizacion.h"
#include "Cuarteles.h"
#include "Edificio.h"
#include "GuerrerosEspeciales.h"
#include "Jugador.h"
#include "Soldados.h"
#include "Tropa.h"
#include <iostream>

#include <vector>
using namespace std;

vector<Civilizacion*> vectorCivilizacion;
vector<Jugador*> vectorJugadores;

//jugador 1
vector<Aldeanos*> aldeanosj1;
vector<Edificio*> edificiosj1;
    vector<Casas*> casasj1;
    vector<Cuarteles*> cuartelesj1;
    vector<Castillos*> castillosj1;
vector<Tropa*> tropasj1;


//jugador2
vector<Aldeanos*> aldeanosj2;
vector<Edificio*> edificiosj2;
    vector<Casas*> casasj2;
    vector<Cuarteles*> cuartelesj2;
    vector<Castillos*> castillosj2;
vector<Tropa*> tropasj2;


bool esJ1 = true;
int numJugador1, numJugador2, numCivi = 0;
int cantOro, cantMadera, cantPiedra, cantAlimentos;
int menu();
void crearCivilizacion();
void crearJugador();
void printCivilizacion();
void printJugadores();
void ingresar();
void nuevoAldeano();
void buscarRecursos();
void nuevoEdificio();
void agregarCasa();
void agregarCuartel();
void agregarCastillo();
void agregarSoldado();
void agregarCaballeria();
void agregarGuerreroEspecial();
void nuevaTropa();
void desterrarPoblacion();
void Batalla();
void estadoActual();
int totalAlimentoAldeanos();


int main (){
	int opcion = 0;
	while (opcion != 5){
		switch (opcion = menu()){
			case 1:
                crearCivilizacion();
			break;

			case 2:
				crearJugador();
			break;

			case 3:
				
			break;

            case 4:
                ingresar();
            break;

		}
	 }
	return 0;
};

int menu (){
   int opcion = 0;
   while (true){
  	cout<<"	MENU" << endl
	<< "1. Crear Civilizacion" << endl
	<< "2. Crear Jugador" << endl
	<< "3. Guardar Informacion" << endl
	<< "4. Ingresar" << endl
    << "5. Salir" <<endl
	<< "Ingrese una opcion: "<<endl;
	cin >> opcion;

	if (opcion < 1 || opcion > 5)
	   cout<<"Opcion incorrecta, intente de nuevo."<<endl;
	else 
	   return opcion;
   }
}

int menu2 (){
   int opcion = 0;
   while (true){
  	cout<<"--SubMenu--" << endl
	<< "1. Nuevo Aldeano" << endl
	<< "2. Buscar Recursos" << endl
	<< "3. Nuevo Edificio" << endl
	<< "4. Nueva Tropa" << endl
    << "5. Desterrar Poblacion" <<endl
    << "6. Batalla" <<endl
    << "7. Finalizar Turno"<< endl
    << "8. Volver al menu principal"
	<< "Ingrese una opcion: "<<endl;
	cin >> opcion;

	if (opcion < 1 || opcion > 9)
	   cout<<"Opcion incorrecta, intente de nuevo."<<endl;
	else 
	   return opcion;
   }
}

void crearCivilizacion(){
    int oro, madera, alimento, poblacionMaxima, poblacionActual, capacidadPoblacion, piedra;
    Civilizacion* c;
    string nombre;
    cout<<"Ingrese nombre de la civlizacion: "<<endl;
    cin >> nombre;
    cout<<"Ingrese cantidad de oro: "<<endl;
    cin >> oro;
    cout << "Ingrese cantidad de madera: "<<endl;
    cin >> madera;
    cout << "Ingrese cantidad de alimento: "<<endl;
    cin >> alimento;
    cout << "Ingrese cantidad de piedra: "<<endl;
    cin >> piedra;
    cout<< "Ingrese poblacion maxima: " << endl;
    cin >> poblacionMaxima;
    while (poblacionMaxima < 0){
        cout<<"Poblacion no puede ser menor o igual a 0. Ingrese de nuevo: "<<endl;
        cin >> poblacionMaxima;
    }
    cout<<"Ingrese poblacion actual: "<<endl;
    cin >> poblacionActual;
    cout << "Ingrese capacidad de poblacion: "<<endl;
    cin >>capacidadPoblacion;
    while (capacidadPoblacion > poblacionMaxima){
        cout<<"La capacidad de poblacion no puede ser mayor a la poblacion maxima. Ingrese de nuevo: "<<endl;
        cin >> capacidadPoblacion;
    }

    c = new Civilizacion(nombre,oro,madera,piedra,alimento,poblacionMaxima,poblacionActual,capacidadPoblacion);
    vectorCivilizacion.push_back(c);
    cout<<"Civilizacion creada exitosamente."<<endl;
}

void printCivilizacion(){
    for(int i = 0; i < vectorCivilizacion.size();i++){ 
        cout<<i+1<<". "<<vectorCivilizacion[i]<<endl;
    }
}

void printJugadores(){
    for(int i = 0; i < vectorJugadores.size(); i++){
        cout<<i+1<<". "<<vectorJugadores[i]<<endl;
    }
}

void crearJugador(){
    if (!vectorCivilizacion.empty()){
        Jugador* j;
        string nombre;

        printCivilizacion();
        cout<<"Escoger numero de civilizacion a la que quiere pertencer: "<<endl;
        cin >> numCivi;
        numCivi--;
        cout << "Ingrese su nombre: "<<endl;
        cin >> nombre;

        j = new Jugador(nombre, vectorCivilizacion[numCivi]);
        cout<<"Jugador creado exitosamente. "<<endl;
    }else 
        cout << "Agregue una civilizacion primero por favor. "<<endl;
}

void estadoActual(){
    if(esJ1){
        cout<<"Aldeanos Disponibles: "<< aldeanosj1.size()+1 << endl;
        //int cantOro, cantMadera, cantPiedra, cantAlimentos;
        //cantOro = vectorCivilizacion[numJugador1]->getOro();
        cantOro = vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getOro();
        cantMadera = vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getMadera();
        cantPiedra = vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getPiedra();
        cantAlimentos = vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAlimento();

       // cantMadera = vectorCivilizacion[numJugador1]->getMadera();
       // cantPiedra = vectorCivilizacion[numJugador1]->getPiedra();
       // cantAlimentos = totalAlimentoAldeanos();

    }else {
        cout<<"Aldeanos Disponibles: "<< aldeanosj2.size()+1 << endl;
        //int cantOro, cantMadera, cantPiedra, cantAlimentos;
        /*cantOro = vectorCivilizacion[numJugador2]->getOro();
        cantMadera = vectorCivilizacion[numJugador2]->getMadera();
        cantPiedra = vectorCivilizacion[numJugador2]->getPiedra();
        cantAlimentos = totalAlimentoAldeanos();*/
        cantOro = vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getOro();
        cantMadera = vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getMadera();
        cantPiedra = vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getPiedra();
        cantAlimentos = vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getAlimento();
    }
}

int totalAlimentoAldeanos(){
    int totalAlimento = 0;

    if(esJ1){
        for(int i = 0; i < aldeanosj1.size(); i++){
        //totalAlimento += aldeanosj1[i]->getCostoAlimentacion();
        totalAlimento += vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAldeano(i)->getCostoAlimentacion();
        }
    }else{
        for(int i = 0; i < aldeanosj2.size(); i++){
      //  totalAlimento += aldeanosj2[i]->getCostoAlimentacion();
            totalAlimento += vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getAldeano(i)->getCostoAlimentacion();
        }
    }
    
    return totalAlimento;
}

void agregarCasa(){
     if(esJ1){
        if ( (cantMadera-50) > -1 ){
            int pobMax = vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getPoblacionMaxima();
            int pobAct = vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getPoblacionActual();
            int capMax = vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getCapacidadPoblacion();

            if ( (pobAct+5) > capMax ){
                cout<<"Lo sentimos. No puede comprar mas casas porque ya llego al limite de poblacion."<<endl;
            }else{
                //edificiosj1.push_back( new Casas(0,50,0));
                //casasj1.push_back(new Casas(0,50,0));
                vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setEdificios(new Casas(0,50,0));
                vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setPoblacionActual(pobAct + 5);
               // vectorCivilizacion[numJugador1]->setPoblacionActual(pobAct + 5);
                cout<<"Casa agregada exitosamente."<<endl;
            }
        }else 
            cout <<"No tienes suficientes recursos."<<endl;
    }else { //significa que es el turno de j2
        if ( (cantMadera-50) > -1 ){       
            int pobMax = vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getPoblacionMaxima();
            int pobAct = vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getPoblacionActual();
            int capMax = vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getCapacidadPoblacion();

            if ( (pobAct+5) > capMax ){
                cout<<"Lo sentimos. No puede comprar mas casas porque ya llego al limite de poblacion."<<endl;
            }else{
               // edificiosj2.push_back( new Casas(0,50,0));
                //casasj2.push_back(new Casas(0,50,0));
                vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setEdificios(new Casas(0,50,0));
                vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setPoblacionActual(pobAct + 5);
                //vectorCivilizacion[numJugador2]->setPoblacionActual(pobAct + 5);
                cout<<"Casa agregada exitosamente."<<endl; }
        }else 
            cout <<"No tienes suficientes recursos."<<endl;

    }//else fin. 
}

void agregarCuartel(){
    if(esJ1){
        if ( ((cantMadera-120) > -1) && ((cantPiedra-80) > -1) ){ //ver si tiene lo necesario para comprar
           // edificiosj1.push_back( new Cuarteles(0,120,80,false,false));
            //cuartelesj1.push_back( new Cuarteles(0,120,80,false,false));
           // vectorCivilizacion[numJugador1]->setMadera( vectorCivilizacion[numJugador1]->getMadera() - 120 );
            //vectorCivilizacion[numJugador1]->setPiedra( vectorCivilizacion[numJugador1]->getPiedra() - 80 );
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setEdificios(new Cuarteles(0,120,80,false,false));
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setMadera( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getMadera() -120 );
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setPiedra( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getPiedra() - 80 );
            cout<<"Cuartel comprado exitosamente." <<endl;
        }else
            cout<<"No tiene suficientes recursos."<<endl;
    }else {//no es j1
        if ( ((cantMadera-120) > -1) && ((cantPiedra-80) > -1) ){ //ver si tiene lo necesario para comprar
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setEdificios(new Cuarteles(0,120,80,false,false));
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setMadera( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getMadera() -120 );
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setPiedra( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getPiedra() - 80 );
            cout<<"Cuartel comprado exitosamente." <<endl;
        }else
            cout<<"No tiene suficientes recursos."<<endl;
    }
}

void agregarCastillo(){
    if(esJ1){
        if ( ((cantMadera-275 > -1) && ((cantPiedra-200) > -1) )){ //ver si tiene lo necesario para comprar
            //edificiosj1.push_back( new Castillos(0,275,200,false));
           // castillosj1.push_back( new Castillos(0,275,200,false));
           // vectorCivilizacion[numJugador1]->setMadera( vectorCivilizacion[numJugador1]->getMadera() - 275 );
           // vectorCivilizacion[numJugador1]->setPiedra( vectorCivilizacion[numJugador1]->getPiedra() - 200 );
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setEdificios(new Castillos(0,275,200,false));
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setMadera( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getMadera() - 275 );
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setPiedra( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getPiedra() - 200 );
            cout<<"Castillo comprado exitosamente." <<endl;
        }else
            cout<<"No tiene suficientes recursos."<<endl;
    }else {//no es j1
        if ( ((cantMadera-275) > -1) && ((cantPiedra-200) > -1) ){ //ver si tiene lo necesario para comprar
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setEdificios(new Castillos(0,275,200,false));
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setMadera( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getMadera() - 275 );
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setPiedra( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getPiedra() - 200 );
            cout<<"Cuartel comprado exitosamente." <<endl;
        }else
            cout<<"No tiene suficientes recursos."<<endl;
    }
}

void nuevoAldeano(){
    string sexo;
    int costoAlimentacion;
    Aldeanos* a;

    cout << "Ingrese sexo del aldeano. "<<endl;
    cin >> sexo; 
    cout << "Ingrese costo de alimentacion del aldeano: "<<endl;
    cin >> costoAlimentacion;
    a = new Aldeanos(sexo, costoAlimentacion);
    if (esJ1){ //verificar si es el primer jugador
        vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setAldeanos(a);
    }else
        vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setAldeanos(a);
    cout<<"Aldeano agregado exitosamente."<<endl;
}

void buscarRecursos(){
    int total = totalAlimentoAldeanos();
    int plusMadera, plusPiedra, plusOro, plusAldeano;
    if ((total-55) > 0){
        if (esJ1){
            if (vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getSizevAldeanos() > 0){
                //recogen recursos todos los aldeanos y la civilizacion en general. 
                for(int i = 0; i < vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getSizevAldeanos(); i++){
                    plusAldeano = vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAldeano(i)->getCostoAlimentacion() + 50;
                    vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAldeano(i)->setCostoAlimentacion( plusAldeano );
                    plusMadera += vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getMadera() + 40;
                    plusOro += vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getOro() + 30;
                    plusPiedra += vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getPiedra() + 20;
                }
                    vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setMadera( plusMadera );
                    vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setOro( plusOro );
                    vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setPiedra( plusPiedra );

                //se le reduce el costo de buscar recursos.. -55
                if (vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAlimento() > 55)
                    vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setAlimento( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAlimento() - 55 );
            }else
                cout << "Debe agregar aldeanos para buscar recursos." <<endl;
        }else {
            if (vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getSizevAldeanos() > 0){
                for(int i = 0; i < vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getSizevAldeanos(); i++){
                    plusAldeano = vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getAldeano(i)->getCostoAlimentacion() + 50;
                    vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getAldeano(i)->setCostoAlimentacion( plusAldeano );
                    plusMadera += vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getMadera() + 40;
                    plusOro += vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getOro() + 30;
                    plusPiedra += vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getPiedra() + 20;
                }
                    vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setMadera( plusMadera );
                    vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setOro( plusOro );
                    vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setPiedra( plusPiedra );

                //se le reduce el costo de buscar recursos.. -55
                if (vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getAlimento() > 55)
                    vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setAlimento( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getAlimento() - 55 );
            }else
                cout << "Debe agregar aldeanos para buscar recursos." <<endl;
        }
    }else
        cout<<"No tiene suficiente recursos. El costo es de 55." <<endl;
    
}

void nuevoEdificio(){
    estadoActual();
    int opt;
    cout << "Que desea construir? "<<endl
    << "1. Casa ($50 Madera)" << endl
    <<"2. Cuartel ($120 Madera y $80 Piedra)" << endl
    <<"3. Castillo ($275 Madera y $200 Piedra)" << endl
    <<"4. Salir" << endl
    << "Ingrese opcion: "<<endl;

    switch (opt){
        case 1:
            agregarCasa();
        break;

        case 2:
            agregarCuartel();
        break;

        case 3:
            agregarCastillo();
        break;

        default:

        break;
    }
}

bool hayCuarteles(){
    Edificio* e;
    bool siHay = false;

    if (esJ1){
        for(int i = 0; i < vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getSizevEdificios(); i++){
        e = static_cast<Cuarteles*>(vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getEdificio(i));
            if (e!=NULL){
                siHay = true;
            }
        }
    }else{
        for(int i = 0; i < vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getSizevEdificios(); i++){
        e = static_cast<Cuarteles*>(vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getEdificio(i));
            if (e!=NULL){
                siHay = true;
            }
        }   
    }

    return siHay;
}

void agregarSoldado(){
    if(esJ1){

        if(hayCuarteles()){//si no esta vacio si puede entrenar tropas.
            if ( ((cantAlimentos-90) > -1) && ((cantOro-25) > -1) ){
                vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setTropas(new Soldados("masculino",20,25,40,20,30,10,2));
                vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setAlimento( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAlimento() - 90 );
                vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setOro( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getOro() - 25 );
                cout<<"Soldado agregado exitosamente. "<<endl;
            }else
                cout<<"No tiene suficientes recursos."<<endl;

        }else
            cout<<"Necesita comprar un cuartel para hacer tropas."<<endl;

    }else{

        if(hayCuarteles()){//si no esta vacio si puede entrenar tropas.
            if ( ((cantAlimentos-90) > -1) && ((cantOro-25) > -1) ){
                vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setTropas(new Soldados("masculino",20,25,40,20,30,10,2));
                vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setAlimento( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getAlimento() - 90 );
                vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setOro( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getOro() - 25 );
                cout<<"Soldado agregado exitosamente. "<<endl;
            }else
                cout<<"No tiene suficientes recursos."<<endl;
        }else
            cout<<"Necesita comprar un cuartel para hacer tropas."<<endl;
    }
}

void agregarCaballeria(){
    if(esJ1){
        if ( ((cantAlimentos-110) > -1) && ((cantOro-60) > -1) ){
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setTropas(new Caballeria("femenino",50,20,60,70,80,30,1,0));
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setAlimento( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAlimento() - 110 );
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setOro( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getOro() - 60 );
            cout<<"Caballeria agregada exitosamente."<<endl;
        }else
            cout<<"No tiene suficientes recursos."<<endl;
    }else{
        if ( ((cantAlimentos-110) > -1) && ((cantOro-60) > -1) ){
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setTropas(new Caballeria("femenino",50,20,60,70,80,30,1,0));
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setAlimento( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAlimento() - 110 );
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setOro( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getOro() - 60 );
            cout<<"Caballeria agregada exitosamente."<<endl;
        }else
            cout<<"No tiene suficientes recursos."<<endl;
    }
}

void agregarGuerreroEspecial(){
    if(esJ1){
        if ( ((cantAlimentos-150) > -1) && ((cantOro-90) > -1) ){
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setTropas(new Caballeria("masculino",100,200,200,200,150,30,1,0));
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setAlimento( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getAlimento() -150 );
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->setOro( vectorJugadores[numJugador1]->getCivilizacion(numCivi)->getOro() - 90 );
            cout<<"Guerro Especial agregado exitosamente."<<endl;
        }else
            cout<<"No tiene suficiente recursos."<<endl;
    }else{
        if ( ((cantAlimentos-150 > -1) && ((cantOro-90) > -1) )){
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setTropas(new Caballeria("masculino",100,200,200,200,150,30,1,0));
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setAlimento( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getAlimento() -150 );
            vectorJugadores[numJugador2]->getCivilizacion(numCivi)->setOro( vectorJugadores[numJugador2]->getCivilizacion(numCivi)->getOro() - 90 );
            cout<<"Guerrero Especial agregado exitosamente."<<endl;
        }else
            cout<<"No tiene suficiente recursos."<<endl;
    }
}
void nuevaTropa(){
    estadoActual();
    int opt;
    cout << "Que tropa desea? "<<endl
    << "1. Soldado ($90 Alimento y $25 Oro)" << endl
    <<"2. Unidad de Caballeria ($110 Alimento y $60 Oro)" << endl
    <<"3. Guerrero Especial ($150 Alimento y $90 Oro)" << endl
    <<"4. Salir" << endl
    << "Ingrese opcion: "<<endl;

    switch (opt){
        case 1:
            agregarSoldado();
        break;

        case 2:
            agregarCaballeria();
        break;

        case 3:
            agregarGuerreroEspecial();
        break;

        default:

        break;
    }
}

void desterrarPoblacion(){
    if(esJ1){
        char respuesta;
        cout<<"ESTA SEGURO DE ELIMINAR SU CIVILIZACION? [s/n]"<<endl;
        cin >> respuesta;

        if(respuesta == 's'){
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->deleteCivilizacion();
            cout<<"Civilizacion borrada. "<<endl;
        }
    }else{
        char respuesta;
        cout<<"ESTA SEGURO DE ELIMINAR SU CIVILIZACION? [s/n]"<<endl;
        cin >> respuesta;

        if(respuesta == 's'){
            vectorJugadores[numJugador1]->getCivilizacion(numCivi)->deleteCivilizacion();
        }

    }
}



void ingresar(){
    //bool esJ1 = true;
  estadoActual();
  if(!vectorJugadores.empty()){
    printJugadores();
    cout<<"Con cual jugador desea comenzar: "<<endl;
    cin >> numJugador1;
    numJugador1--;
    
    //EL JUGADOR DOS LO ASIGNAMOOS EN BATALLAAAAAAAA

    if(numJugador1==0)
        numJugador2 = 1;
    else
        numJugador2 = 1;

    int opcion = 0;
	while (opcion != 8){
		switch (opcion = menu2()){
			case 1:
                nuevoAldeano();
			break;

			case 2:
				buscarRecursos();
			break;

			case 3:
				nuevoEdificio();
			break;

            case 4:
                nuevaTropa();
            break;

            case 5:
                desterrarPoblacion();
            break;

            case 6:

            break;

            case 7:
                if(esJ1){
                    esJ1 = false;
                }     
                else{
                    esJ1 = true;
                }     
            break;

		}
	 }
  }else
    cout<<"Agregue jugadores para poder ingresar por favor. "<<endl;
}


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


//jugador2
vector<Aldeanos*> aldeanosj2;


bool esJ1 = true;
int menu();
void crearCivilizacion();
void crearJugador();
void printCivilizacion();
void printJugadores();
void ingresar();
void nuevoAldeano();
void buscarRecursos();
void nuevoEdificio();
void nuevaTropa();
void desterrarPoblacion();
void Batalla();
void estadoActual();


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
        int numCivi;

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
        cout<<"Recursos disponibles: "<< "sarah hace el for pls and thank u"<<endl;
        

    }else {

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
        aldeanosj1.push_back(a);
    }else
        aldeanosj2.push_back(a);
    
    cout<<"Aldeano agregado exitosamente."<<endl;
}

void buscarRecursos(){
    if (esJ1){
        if (aldeanosj1.size() > 0){




        }else
            cout << "Debe agregar aldeanos para buscar recursos." <<endl;
    }else {
        if (aldeanosj2.size() > 0){





        }else
            cout << "Debe agregar aldeanos para buscar recursos." <<endl;
    }
}
void ingresar(){
    //bool esJ1 = true;
    int j1;
    printJugadores();
    cout<<"Con cual jugador desea comenzar: "<<endl;
    cin >> j1;
    j1--;

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
				
			break;

            case 4:
                ingresar();
            break;

            case 5:

            break;

            case 6:

            break;

            case 7:
                if(esJ1)
                    esJ1 = false;
                else 
                    esJ1 = true;
            break;

		}
	 }
}


main.o:	Main.o Aldeanos.o Caballeria.o Casas.o Castillos.o Civilizacion.o Cuarteles.o Edificio.o GuerrerosEspeciales.o Jugador.o Soldados.o Tropa.o
	g++ Main.o Aldeanos.o Caballeria.o Casas.o Castillos.o Civilizacion.o Cuarteles.o Edificio.o GuerrerosEspeciales.o Jugador.o Soldados.o Tropa.o -o main
	rm *.o

Main.o:	Main.cpp Aldeanos.h Caballeria.h Casas.h Castillos.h Civilizacion.h Cuarteles.h Edificio.h GuerrerosEspeciales.h Jugador.h Soldados.h Tropa.h
	g++ -c Main.cpp

Aldeanos.o:	Aldeanos.h
	g++ -c Aldeanos.cpp

Caballeria.o:	Tropa.h Caballeria.h
	g++ -c Caballeria.cpp

Casas.o:	Edificio.h Aldeanos.h Casas.h
	g++ -c Casas.cpp

Castillos.o:	Edificio.h Castillos.h
	g++ -c Castillos.cpp

Civilizacion.o:	Cuarteles.h Edificio.h Civilizacion.h Tropa.h Tropa.cpp
	g++ -c Castillos.cpp

Cuarteles.o:	Edificio.h Cuarteles.h
	g++ -c Cuarteles.cpp

Edificio.o:	Edificio.h
	g++ -c Edificio.cpp

GuerrerosEspeciales.o:	Tropa.h Jugador.h GuerrerosEspeciales.h
	g++ -c GuerrerosEspeciales.cpp

Jugador.o:	Civilizacion.h Jugador.h
	g++ -c Jugador.cpp

Soldados.o:	Tropa.h Jugador.h Soldados.h
	g++ -c Soldados.cpp

Tropa.o:	Aldeanos.h Jugador.h Tropa.h
	g++ -c Tropa.cpp

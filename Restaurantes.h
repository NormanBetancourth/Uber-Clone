#pragma once
#include "ListaCombos.h"
class Restaurantes {
private:
	string nombre;
	string cedulajur�dica;
	string direcci�n;
	string tipodecomida;
	ListaCombos* LC;

public:
	Restaurantes(string = "none", string = "none", string = "none", string = "none", ListaCombos* = NULL);
	Restaurantes();
	~Restaurantes();
	string getnombre();
	string getcedulajur�dica();
	string getdirecci�n();
	string gettipodecomida();
	ListaCombos* getlistacombos();
	void setnombre(string);
	void setcedulajuridica(string);
	void setdireccion(string);
	void settipodeComida(string);
	void setlistacombos(ListaCombos*);
	string toStringRestaurantes();
	string tostringNombre();
	bool encontrarComboID(int);
	void guardar(ofstream&);
	static Restaurantes* leer(ifstream&);


};


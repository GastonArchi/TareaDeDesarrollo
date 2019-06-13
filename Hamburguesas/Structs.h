#pragma once
#include <string>
#include <iostream>
using namespace std;
const double IVA = 0.21;

enum NIVEL_DE_GRASA
{
	ALTO = 3, MEDIO = 2, BAJO = 1 
};

//ACA CREO LOS STRUCTS BASICOS

struct Paty
{
	double precio;
	NIVEL_DE_GRASA nivelDeGrasa;
	int grosor;
};



struct Gaseosa
{
	double precio;
	string marca;
	string unSabor;
};

struct Panceta
{
	double precio;
	NIVEL_DE_GRASA nivelDeGrasa;
	string puntoDeCoccion;
};

struct Cheddar
{
	double precio;
	string nivelDeGrasa;
};

struct Pan
{
	double precio;
	bool integral;
};



//LISTAS

struct nodoPaty
{
	Paty* unPaty;
	nodoPaty* next;
};

struct listaPaty
{
	nodoPaty* primerElemento;
};

//eskere

struct nodoCheddar
{
	Cheddar* unCheddar;
	nodoCheddar* next;
};

struct listaCheddar
{
	nodoCheddar* primerElemento;
};

//eskereeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee

struct nodoPanceta
{
	Panceta* unaPanceta;
	nodoPanceta* next;
};

struct listaPanceta
{
	nodoPanceta* primerElemento;
};



struct Hamburguesa
{
	Pan* panInferior;
	Pan* panSuperior;
	listaPaty* patys;
	listaCheddar* cheddars;
	listaPanceta* panceta;
};


// La verga innecesaria
Paty* patyCreate(double precio, NIVEL_DE_GRASA nivelDeGrasa, int grosor);
Gaseosa* GaseosaCreate(double precio, string marca, string unSabor);
Pan* panCreate(double precio, bool integral);
Panceta* pancetaCreate(double precio, NIVEL_DE_GRASA nivelDeGrasa, string puntoDeCoccion);
Cheddar* cheddarCreate(double precio, NIVEL_DE_GRASA nivelDeGrasa);


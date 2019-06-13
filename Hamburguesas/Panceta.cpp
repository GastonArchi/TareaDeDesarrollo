#include <string>
#include <iostream>
#include "Structs.h"
using namespace std;


Panceta* pancetaCreate(double precio, NIVEL_DE_GRASA nivelDeGrasa, string puntoDeCoccion)
{
	Panceta* unaPanceta = new Panceta;
	unaPanceta->precio = precio;
	unaPanceta->nivelDeGrasa = nivelDeGrasa;
	unaPanceta->puntoDeCoccion = puntoDeCoccion;

	return unaPanceta;
}
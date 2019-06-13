#include <string>
#include <iostream>
#include "Structs.h"
using namespace std;

Cheddar* cheddarCreate(double precio, NIVEL_DE_GRASA nivelDeGrasa)
{
	Cheddar* unCheddar = new Cheddar;

	unCheddar->precio = precio;
	unCheddar->nivelDeGrasa = nivelDeGrasa;

	return unCheddar;
}




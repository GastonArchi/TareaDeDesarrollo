#include <string>
#include <iostream>
#include "Structs.h"
using namespace std;

Gaseosa* GaseosaCreate(double precio, string marca, string unSabor)
{
	Gaseosa* unaGaseosa = new Gaseosa;

	unaGaseosa->precio = precio;
	unaGaseosa->marca = marca;
	unaGaseosa->unSabor = unSabor;

	return unaGaseosa;
	   
}
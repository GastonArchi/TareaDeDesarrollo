#include <string>
#include <iostream>
#include "Structs.h"
using namespace std;


Paty* patyCreate(double precio, NIVEL_DE_GRASA nivelDeGrasa, int grosor) 
{
	Paty* unPaty = new Paty;
	
	unPaty->precio = precio;
	unPaty->nivelDeGrasa = nivelDeGrasa;
	unPaty->grosor = grosor;

	return unPaty;
}









#include <string>
#include <iostream>
#include "Structs.h"
using namespace std;

//Punto 2 B

double calcularIva(double precioSinIva) {

	precioSinIva = precioSinIva * (1 + IVA);

	return precioSinIva;

}

double patyPrecioFinalConIva(Paty * unPaty) {
	return calcularIva(unPaty->precio);
}
double gaseosaPrecioFinalConIva(Gaseosa * unaGaseosa) {
	return calcularIva(unaGaseosa->precio);
}
double pancetaPrecioFinalConIva(Panceta * unaPanceta) {
	return calcularIva(unaPanceta->precio);
}
double cheddarPrecioFinalConIva(Cheddar * unCheddar) {
	return calcularIva(unCheddar->precio);
}
double panPrecioFinalConIva(Pan * unPan) {
	return calcularIva(unPan->precio);
}

//FIN PUNTO 2B



int main()
{
	//INCIALIZO STRUCTS

	Paty* unPaty = patyCreate(10, ALTO, 4);
	Gaseosa* unaGaseosa = GaseosaCreate(15, "Goliat" , "Cereza");
	Pan* unPan = panCreate(3, false);
	Panceta*  unaPanceta = pancetaCreate(5, ALTO, "Cocido");
	Cheddar* unCheddar = cheddarCreate(4, BAJO );

	cout << patyPrecioFinalConIva(unPaty);

}



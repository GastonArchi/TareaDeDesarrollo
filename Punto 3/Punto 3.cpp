// Se ingresa un conjunto de valores positivos terminado con un valor negativo. Se pide desarrollar el programa
//que imprima el valor máximo del conjunto y su posición relativa dentro del mismo (el número de orden en el
//que fue ingresado).

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void mayorConPosicion()
{
	int numMax = 0;
	int unNumero = 0;
	int cantNums = 1;
	int posNumMax = 0;
	do {

		cout << "ingrese un numero";
		cin >> unNumero;
		if (unNumero > numMax) {
			numMax = unNumero;
			posNumMax = cantNums;
		}
		cantNums++;
	} while (unNumero >= 0);
	cout << "El numero mayor es: " << endl;
	cout << numMax << endl;
	cout << "Y su posicion es: " << endl;
	cout << posNumMax;
}

int main()
{
	mayorConPosicion();
}
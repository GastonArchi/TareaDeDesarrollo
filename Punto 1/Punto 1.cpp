
//Dados 10 valores numéricos, informar cual es el mayor de ellos por pantalla.

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void buscarMayor()
{
	const int canMaxima = 10;
	int mayorNumero = 0;
	int numeros[canMaxima];

	for (int i = 0; i < canMaxima; i++)
	{
		cout << "ingrese un numero" << endl;
		cin >> numeros[i];
		if (i == 0) {
			mayorNumero = numeros[i];
		}
		else if (numeros[i] > mayorNumero) {
			mayorNumero = numeros[i];
		}
	}

	cout << "el mayor numero fue: " << mayorNumero;

}

int main()
{
	buscarMayor();
}
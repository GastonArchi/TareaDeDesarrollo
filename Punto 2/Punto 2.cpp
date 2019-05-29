
//Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que –10
//por pantalla.

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void mayor100menor10()
{
	const int cantidadMax = 6;
	int mayor100 = 0;

	int numeros[cantidadMax];

	int mayoresA100 = 0;
	int menoresA10 = 0;
	int contador = 0;

	for (int i = 0; i < cantidadMax; i++)
	{
		cout << "ingrese un numero: ";
		cin >> numeros[i];
		if (numeros[i] < -10)
		{
			menoresA10 = menoresA10 + numeros[i];
		}
		if (numeros[i] > 100)
		{
			mayoresA100 = mayoresA100 + numeros[i];
			contador++;
		}
	}
	int promedio = mayoresA100 / contador;
	cout << "El promedio de los numeros ingresados que son mayores a 100 es: ";
	cout << promedio << endl;
	cout << "La suma de los numeros ingresados menores a -10 es : ";
	cout << menoresA10;
}

int main()
{
	mayor100menor10();
}
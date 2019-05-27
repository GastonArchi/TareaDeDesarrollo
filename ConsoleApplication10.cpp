// ConsoleApplication10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int buscarMenor() 
{
	const int cantidadMaxima = 10;
	int menorNumero = 0;
	int numeros[cantidadMaxima];

	for (int i = 0; i < cantidadMaxima; i++)
	{
		cout << "ingrese un numero";
		cin >> numeros[i];
		if (i == 0) {
			menorNumero = numeros[i];
		}
		else if (numeros[i] < menorNumero) {
			menorNumero = numeros[i];
		}
	}

	cout << "el menor numero fue: " << menorNumero;
	return menorNumero;
}


int mayor100menor10()
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

		return 0;
}

int mayorConPosicion()
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
	}
	while (unNumero >= 0);
	cout << "El numero mayor es: " << endl;
	cout << numMax << endl;
	cout << "Y su posicion es: " << endl;
	cout << posNumMax;
	return 0;
}

int multiplos()
{
	int m = 0;
	int multiploDe5 = 5;
	cout << "ingrese el numero" << endl;
	cin >> m;
	for (int i = 3; i < (m * 3); i = i + 3) {
		if ((i / 3) == multiploDe5) {
			multiploDe5 += 5;
		}
		else {
			cout << "multiplo de 3 pero no de 5: " << i << endl;
		}
	}
	return 0;
}

void convertirFecha(int fecha) 
{

	string fechaTexto;

	fechaTexto = to_string(fecha);

	cout << fechaTexto[0] << fechaTexto[1] << fechaTexto[2] << fechaTexto[3] << endl;

	cout << fechaTexto[4] << fechaTexto[5]<< endl;

	cout << fechaTexto[6] << fechaTexto[7] << endl;
}

int convertidorFecha()
{

	int fecha = 0;
	

	cout << "ingrese fecha en YYYYMMDD" << endl;
	cin >> fecha;

	convertirFecha (fecha);

	return 0;
}

int fechaReciente() 
{
	int fecha1 = 0;
	int fecha2 = 0;

	cout << "ingresar fechas en formato AAAAMMDD: " << endl;
	cin >> fecha1;
	cin >> fecha2;

	cout << "la fecha mas reciente es: " << endl;
	if (fecha1 > fecha2) {
		cout << fecha1;

	}
	else {
		cout << fecha2;
	}
	return 0;
}

int unificarfecha() {

	
	int anno = 0;
	int mes = 0;
	int dia = 0;
	int *fechaUnif = &dia;

	cout << "ingrese el anno: " << endl;
	cin >> anno;
	cout << "ingrese el mes: " << endl;
	cin >> mes;
	cout << "ingrese el dia: " << endl;
	cin >> dia;

	dia += (mes * 100);
	dia += (anno * 10000);

	return *fechaUnif;
}

void punto7() {

	cout << unificarfecha();
}
 
int pow(int base, int exponente) {
	

	int resultado = 0;

	resultado = base;

	for (int i = 0; i < exponente; i++)
	{
		resultado = resultado * base;
	}

	return resultado;
	
}

void punto9() {

	int num1 = 0;
	int num2 = 0;

	cout << "ingrese base" << endl;
	cin >> num1;
	cout << "ingrese exponente" << endl;
	cin >> num2;

	cout << pow(num1, num2);
}

bool sonMultiplos(int numero,int multiplo) {


	return multiplo % numero == 0;
}


void punto8() {

	int numero = 0;
	int multiplo = 0;

	cout << "ingrese numero" << endl;
	cin >> numero;
	cout << "ingrese multiplo" << endl;
	cin >> multiplo;

	cout << "is it multiply? (1 = yes / 0= no): " << sonMultiplos(numero, multiplo);
}

int main()[

]

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

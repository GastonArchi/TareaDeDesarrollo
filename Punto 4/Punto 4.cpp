// Dado un valor numérico entero m, determinar e imprimir un listado con los m primeros múltiplos de 3 que no
//sean múltiplos de 5.

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	int m = 0;
	int i = 3;
	int contador = 0;
	int multiploDe5 = 5;

	cout << "ingrese el numero" << endl;
	cin >> m;

	while (contador != m) {
		if ((i / 3) == multiploDe5) {
			multiploDe5 += 5;
		}
		else {
			cout << "multiplo de 3 pero no de 5: " << i << endl;
			contador++;
		}
		i += 3;
	}
}
#include <iostream>
#include <sstream>
#include <string>
using namespace std;


void fechaReciente()
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

}

int main()
{
	fechaReciente();
}
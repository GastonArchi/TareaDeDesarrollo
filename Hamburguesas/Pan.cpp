#include <string>
#include <iostream>
#include "Structs.h"
using namespace std;

Pan* panCreate(double precio, bool integral)
{
	Pan* unPan = new Pan;

	unPan->precio = precio;
	unPan->integral = integral;

	return unPan;
}
#include "Rhombus.h"
#include "Parallelepiped.h"
#include "Ellipse.h"

int main()
{
	Rhombus rh(3, 4);
	Parallelepiped par(7, 5, 8);
	Ellipse ell(3, 4);
	cout << rh << endl;
	cout << par << endl;
	cout << ell << endl;
}
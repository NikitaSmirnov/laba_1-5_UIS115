#include "Parallelepiped.h"

void Parallelepiped::set_sides(const double length, const double width, const double height)
{
	if (length > 0 && width > 0 && height > 0)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}
	else
	{
		throw invalid_argument("Неверные значения");
	}
}
Parallelepiped::Parallelepiped(const double length, const double width, const double height)
{
	set_sides(length, width, height);
}
Parallelepiped::~Parallelepiped() {};
ostream& operator<<(ostream& out, Parallelepiped& par)
{
	out << "Perimeter = " << par.get_perimeter() << endl;
	out << "Area = " << par.get_area() << endl;
	return out;
}
double Parallelepiped::get_perimeter()
{
	return 4.0 * length + 4.0 * width + 4.0 * height;
}
double Parallelepiped::get_area()
{
	return 2.0 * (length * height + length * width + width * height);
}
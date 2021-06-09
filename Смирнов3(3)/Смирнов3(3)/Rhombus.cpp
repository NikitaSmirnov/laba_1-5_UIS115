#include "Rhombus.h"
void Rhombus::set_sides(const double base, const double height)
{
	if (base > 0 && height > 0)
	{
		this->base = base;
		this->height = height;
	}
	else
	{
		throw invalid_argument("Неверные значения");
	}
}
Rhombus::Rhombus(const double base, const double height)
{
	set_sides(base, height);
}
Rhombus::~Rhombus() {};
ostream& operator<<(ostream& out, Rhombus& rh)
{
	out << "Perimeter = " << rh.get_perimeter() << endl;
	out << "Area = " << rh.get_area() << endl;
	return out;
}
double Rhombus::get_perimeter()
{
	return base * 4.0;
}
double Rhombus::get_area()
{
	return base * height;
}
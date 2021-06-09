#include "Ellipse.h"

void Ellipse::set_semi_axis(const double a, const double b)
{
	if (a > 0 && b > 0)
	{
		this->a = a;
		this->b = b;
	}
	else
	{
		throw invalid_argument("Неверные значения");
	}
}
Ellipse::Ellipse(const double a, const double b)
{
	set_semi_axis(a, b);
}
Ellipse::~Ellipse() {};
ostream& operator<<(ostream& out, Ellipse& ell)
{
	out << "Perimeter = " << ell.get_perimeter() << endl;
	out << "Area = " << ell.get_area() << endl;
	return out;
}
double Ellipse::get_perimeter()
{
	return 2.0 * PI * sqrt((a * a + b * b) / 2.0);
}
double Ellipse::get_area()
{
	return PI * a * b;
}
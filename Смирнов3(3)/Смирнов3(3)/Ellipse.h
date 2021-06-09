#pragma once
#include "Geometric_figures.h"
class Ellipse :public Geometric_figures
{
private:
	double a, b;
	/**
	 \brief	Принимает стороны
	 */
	void set_semi_axis(const double a, const double b);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Ellipse(const double a, const double b);
	/**
	 \brief	Виртуальный деструктор
	 */
	virtual ~Ellipse();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Ellipse& ell);
	/**
	 \brief	Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief	Получает площадь
	 */
	double get_area()override;
};


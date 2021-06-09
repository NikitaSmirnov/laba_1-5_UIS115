#pragma once
#include "Geometric_figures.h"
class Rhombus :public Geometric_figures
{
private:
	double base, height;
	/**
	 \brief	Принимает стороны
	 */
	void set_sides(const double base, const double height);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Rhombus(const double base, const double height);
	/**
	 \brief	Виртуальный деструктор
	 */
	virtual ~Rhombus();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Rhombus& rh);
	/**
	 \brief	Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief	Получает площадь
	 */
	double get_area()override;
};


#pragma once
#include "Geometric_figures.h"
class Parallelepiped :public Geometric_figures
{
private:
	double length, width, height;
	/**
	 \brief	Принимает стороны
	 */
	void set_sides(const double length, const double width, const double height);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Parallelepiped(const double length, const double width, const double height);
	/**
	 \brief	Виртуальный деструктор
	 */
	virtual ~Parallelepiped();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Parallelepiped& par);
	/**
	 \brief	Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief	Получает площадь
	 */
	double get_area()override;
};


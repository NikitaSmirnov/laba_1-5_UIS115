#pragma once
#include"Pair.h"
/**
* \brief Класс дробь, наследованный от Pair
*/
class Fraction : public Pair {
private:
	double whole, fractional;
public:
	/**
	* \brief Конструктор по умолчанию
	*/
	explicit Fraction() = default;

	/**
	* \brief Конструктор с параметрами
	*/
	explicit Fraction(double whole, double fractional);

	/**
	* \brief Деструктор по умолчанию
	*/
	~Fraction();

	/**
	* \brief Перегрузка оператора <
	*/
	bool operator <(const Fraction& Other)const;

	/**
	* \brief Перегрузка оператора >
	*/
	bool operator >(const Fraction& Other)const;

	/**
	* \brief Перегрузка оператора ==
	*/
	bool operator ==(const Fraction& Other)const;
};
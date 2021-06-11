#pragma once
#include <cmath>
#include <limits>
using namespace std;
/**
* \brief Класс пара чисел
*/
class Pair {
private:
	double first, second;
public:
	/**
	* \brief Конструктор по умолчанию
	*/
	explicit Pair() = default;

	/**
	* \brief Конструктор с параметрами
	*/
	explicit Pair(const double first, const double second);

	/**
	* \brief Деструктор по умолчанию
	*/
	~Pair();

	/**
	* \brief Метод изменения поля first
	*/
	void setFirst(const double first);

	/**
	* \brief Метод изменения поля second
	*/
	void setSecond(const double second);

	/**
	* \brief Перегрузка оператора <
	*/
	bool operator <(const Pair& Other)const;

	/**
	* \brief Перегрузка оператора >
	*/
	bool operator >(const Pair& Other)const;

	/**
	* \brief Перегрузка оператора ==
	*/
	bool operator ==(const Pair& Other)const;

	/**
	* \brief Проверка на равенство переменных double
	*/
	bool IsEqual(const double frist, const double second)const;
};
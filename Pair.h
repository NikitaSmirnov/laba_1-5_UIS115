#pragma once
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
	explicit Pair(double first, double second);

	/**
	* \brief Деструктор по умолчанию
	*/
	~Pair();

	/**
	* \brief Метод изменения поля first
	*/
	void setFirst(double first);

	/**
	* \brief Метод изменения поля second
	*/
	void setSecond(double second);

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
};

#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Vector3D
{
private:
	double x, y, z;
public:
	/**
	 \brief	Конструктор по умолчанию.
	 */
	Vector3D();
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Vector3D(const double x, const double y, const double z);
	/**
	 \brief	Деструктор по умолчанию.
	 */
	~Vector3D() = default;
	/**
	 \brief	Конструктор копирования по умолчанию.
	 */
	Vector3D(const  Vector3D&) = default;
	/**
	 \brief	Конструктор присваивания по умолчанию.
	 */
	Vector3D& operator=(const  Vector3D&) = default;
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Vector3D& vec);
	/**
	 \brief	Оператор сложения векторов
	 */
	Vector3D operator+(const Vector3D& other);
	/**
	 \brief	Оператор вычитания векторов
	 */
	Vector3D operator-(const Vector3D& other);
	/**
	 \brief	Оператор умножения векторов
	 */
	double operator*(const Vector3D& other);
	/**
	 \brief	Оператор умножения на скаляр
	 */
	Vector3D operator*(const double a);
	/**
	 \brief	получает длину вектора
	 */
	double get_vector_length() const;
	/**
	 \brief	получает x
	 */
	double get_x()const;
	/**
	 \brief	получает y
	 */
	double get_y()const;
	/**
	 \brief	получает z
	 */
	double get_z()const;
	/**
	 \brief	Оператор сравнения равно
	 */
	bool operator==(const Vector3D& other);
	/**
	 \brief	Оператор сравнения больше
	 */
	bool operator>(const Vector3D& other);
	/**
	 \brief	Оператор вычитания векторов меньше
	 */
	bool operator<(const Vector3D& other);
};


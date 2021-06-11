#pragma once
#include"Pair.h"
/**
* \brief ����� �����, ������������� �� Pair
*/
class Fraction : public Pair {
private:
	double whole, fractional;
public:
	/**
	* \brief ����������� �� ���������
	*/
	explicit Fraction() = default;

	/**
	* \brief ����������� � �����������
	*/
	explicit Fraction(double whole, double fractional);

	/**
	* \brief ���������� �� ���������
	*/
	~Fraction();

	/**
	* \brief ���������� ��������� <
	*/
	bool operator <(const Fraction& Other)const;

	/**
	* \brief ���������� ��������� >
	*/
	bool operator >(const Fraction& Other)const;

	/**
	* \brief ���������� ��������� ==
	*/
	bool operator ==(const Fraction& Other)const;
	
	/**
	* \brief �������� �� ��������� ���������� double
	*/
	bool IsEqual(const double whole, const double fractional)const;
};
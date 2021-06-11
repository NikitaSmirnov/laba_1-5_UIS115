#pragma once
#include <cmath>
#include <limits>
using namespace std;
/**
* \brief ����� ���� �����
*/
class Pair {
private:
	double first, second;
public:
	/**
	* \brief ����������� �� ���������
	*/
	explicit Pair() = default;

	/**
	* \brief ����������� � �����������
	*/
	explicit Pair(const double first, const double second);

	/**
	* \brief ���������� �� ���������
	*/
	~Pair();

	/**
	* \brief ����� ��������� ���� first
	*/
	void setFirst(const double first);

	/**
	* \brief ����� ��������� ���� second
	*/
	void setSecond(const double second);

	/**
	* \brief ���������� ��������� <
	*/
	bool operator <(const Pair& Other)const;

	/**
	* \brief ���������� ��������� >
	*/
	bool operator >(const Pair& Other)const;

	/**
	* \brief ���������� ��������� ==
	*/
	bool operator ==(const Pair& Other)const;

	/**
	* \brief �������� �� ��������� ���������� double
	*/
	bool IsEqual(const double frist, const double second)const;
};
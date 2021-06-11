#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief Класс насследник от стандартного исключения
*/
class MyException3 :public invalid_argument {
public:
	/**
	* \brief Конструктор принимающий сообщение об ошибке
	*/
	explicit MyException3(const string& message);

	/**
	* \brief Деструктор по умолчанию
	*/
	~MyException3();
};

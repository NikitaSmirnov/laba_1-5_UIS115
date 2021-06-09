#pragma once
#include<string>
using namespace std;
/**
* \brief Независимый класс с полями
*/
class MyException2 {
public:
	string message;
	/**
	* \brief конструктор принимающий сообщение об ошибке
	*/
	explicit MyException2(const string& message);

	/**
	* \brief Деструктор по умолчанию
	*/
	~MyException2();
};

#include"Fraction.h"
#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Pair Pair1(0,0);
	Pair Pair2(0,0);
	Pair1.setFirst(2); Pair1.setSecond(2);
	Pair2.setFirst(2); Pair2.setSecond(2);
	if (Pair1 > Pair2)
		cout << "ѕерва¤ пара больше" << endl;
	else if (Pair1 < Pair2)
		cout << "¬тора¤ пара больше" << endl;
	else
		cout << "ѕары равны" << endl;
	try
	{
		Fraction Fraction1(1, 22);
		Fraction Fraction2(1, 22);
		if (Fraction1 > Fraction2)
			cout << "ѕерва¤ дробь больше" << endl;
		else if (Fraction1 < Fraction2)
			cout << "¬тора¤ дробь больше" << endl;
		else
			cout << "ƒроби равны" << endl;
	}
	catch (double)
	{
		cout << "ƒробь введена неправильно" << endl;
	}
}
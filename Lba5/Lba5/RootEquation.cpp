#include"RootEquation.h"
double RootEquation1(double a,double b) {
	if (a == 0)
		throw 1.0;
	else
		return -b / a;
}
double RootEquation2(double a, double b) {
	if (a == 0)
		throw 1.0;	
	else
		return -b / a;
}
double RootEquation3(double a, double b) {
	if (a == 0)
		throw invalid_argument{ "Уравнение не имеет решений или имеет бесконечно много решений,со стандартным исключением" };
	else
		return -b / a;
}
double RootEquation4(double a, double b) {
	if (a == 0)
		throw MyException();
	else
		return -b / a;
}
double RootEquation5(double a, double b) {
	if (a == 0)
		throw MyException2("Уравнение не имеет решений или имеет бесконечно много решений,с полями-параметрами");
	else
		return -b / a;
}
double RootEquation6(double a, double b) {
	if (a == 0)
		throw MyException3("Уравнение не имеет решений или имеет бесконечно много решений,как наследник");
	else
		return -b / a;
}
#include"RootEquation.h"
double RootEquation1(const double a, const double b) {
	if (fabs(a) < std::numeric_limits<double>::epsilon())
		throw 1.0;	
	return -b / a;
}
double RootEquation2(const double a, const double b) {
	if (fabs(a) < std::numeric_limits<double>::epsilon())
		throw invalid_argument{"Уравнение не имеет решений или имеет бесконечно много решений,со стандартным исключением" };
	return -b / a;
}
double RootEquation3(const double a, const double b) {
	if (fabs(a) < std::numeric_limits<double>::epsilon())
		throw MyException();
	return -b / a;
}
double RootEquation4(const double a, const double b) {
	if (fabs(a) < std::numeric_limits<double>::epsilon())
		throw MyException2("Уравнение не имеет решений или имеет бесконечно много решений,с полями-параметрами");
	return -b / a;
}
double RootEquation5(const double a, const double b) {
	if (fabs(a) < std::numeric_limits<double>::epsilon())
		throw MyException3("Уравнение не имеет решений или имеет бесконечно много решений,как наследник");
	return -b / a;
}
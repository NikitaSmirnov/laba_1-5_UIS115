#include "RootEquation.h"
int main() {
	setlocale(LC_ALL, "Russian");

	try {
		cout << RootEquation1(0, 1) << endl;
	}
	catch(...){
		cout << "”равнение не имеет решений или имеет бесконечно много решений,без спецификатора" << endl;
	}

	try {
		cout << RootEquation2(0, 2) << endl;
	}
	catch (double) {
		cout << "”равнение не имеет решений или имеет бесконечно много решений,спецификатор throw" << endl;
	}

	try {
		cout << RootEquation3(0, 3) << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}

	try {
		cout << RootEquation4(0, 4) << endl;
	}
	catch (MyException){
		cerr << "”равнение не имеет решений или имеет бесконечно много решений,пустой класс" << endl;
	}

	try {
		cout << RootEquation5(0, 5) << endl;
	}
	catch (MyException2 error) {
		cerr << error.message << endl;
	}

	try {
		cout << RootEquation6(0, 6) << endl;
	}
	catch (MyException3 error) {
		cerr << error.what() << endl;
	}
}
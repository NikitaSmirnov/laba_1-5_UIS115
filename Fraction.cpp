#include"Fraction.h"
Fraction::Fraction(double whole, double fractional) :Pair(whole, fractional) {
	if (fractional < 0)
		throw 1.0;
	else {
		this->whole = whole;
		this->fractional = fractional;
	}
}
Fraction :: ~Fraction() = default;
bool Fraction :: operator >(const Fraction& Other)const {
	if (whole == Other.whole)
		return fractional > Other.fractional;
	else
		return whole > Other.whole;
}
bool Fraction :: operator <(const Fraction& Other)const {
	if (whole == Other.whole)
		return fractional < Other.fractional;
	else
		return whole < Other.whole;
}
bool Fraction :: operator ==(const Fraction& Other)const {
	return fractional == Other.fractional && whole == Other.whole;
}
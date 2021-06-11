#include"Fraction.h"
#include <cmath>
Fraction::Fraction(double whole, double fractional) :Pair(whole, fractional) {
	if (fractional < 0)
		throw 1.0;
	else {
		this->whole = whole;
		this->fractional = fractional;
	}
}
Fraction :: ~Fraction() = default;
bool Fraction :: operator >(const Fraction & Other)const {
	if (IsEqual(whole,Other.whole))
		return fractional > Other.fractional;
	else
		return whole > Other.whole;
}
bool Fraction :: operator <(const Fraction & Other)const {
	if (IsEqual(whole,Other.whole))
		return fractional < Other.fractional;
	else
		return whole < Other.whole;
}
bool Fraction :: operator ==(const Fraction& Other)const {
	return IsEqual(fractional,Other.fractional) && IsEqual(whole,Other.whole);
}
bool Fraction::IsEqual(const double whole, const double fractional)const {
	return fabs(whole - fractional) < numeric_limits<double>::epsilon();;
}
#include"Pair.h"
Pair::Pair(double first, double second):whole{ first }, fractional{ second }{}
Pair::~Pair() = default;
void Pair::setFirst(double first) { this->whole = first; }
void Pair::setSecond(double second){ this->fractional = second; }
bool Pair :: operator >(const Pair& Other)const{
	if (whole == Other.whole)
		return fractional > Other.fractional;
	else
		return whole > Other.whole;
}
bool Pair :: operator <(const Pair& Other)const {
	if (whole == Other.whole)
		return fractional < Other.fractional;
	else
		return whole < Other.whole;
}
bool Pair :: operator ==(const Pair& Other)const {
	return fractional == Other.fractional && whole == Other.whole;
}
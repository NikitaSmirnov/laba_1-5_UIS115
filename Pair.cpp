#include"Pair.h"
Pair::Pair(const double first, const double second):first{ first }, second{ second }{}
Pair::~Pair() = default;
void Pair::setFirst(const double first) { this->first = first; }
void Pair::setSecond(const double second){ this->second = second; }
bool Pair :: operator >(const Pair& Other)const{
	if (first == Other.first)
		return second > Other.second;
	else
		return first > Other.first;
}
bool Pair :: operator <(const Pair& Other)const {
	if (IsEqual(first, Other.first))
		return second < Other.second;
	else
		return first < Other.first;
}
bool Pair :: operator ==(const Pair& Other)const {
	return IsEqual(second,Other.second) && IsEqual(first,Other.first);
}
bool Pair::IsEqual(const double first,const double second)const {
	return fabs(first - second) < numeric_limits<double>::epsilon();;
}
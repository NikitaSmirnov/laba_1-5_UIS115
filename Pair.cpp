#include"Pair.h"
Pair::Pair(double first, double second):first{ first }, second{ second }{}
Pair::~Pair() = default;
void Pair::setFirst(double first) { this->first = first; }
void Pair::setSecond(double second){ this->second = second; }
bool Pair :: operator >(const Pair& Other)const{
	if (first == Other.first)
		return second > Other.second;
	else
		return first > Other.first;
}
bool Pair :: operator <(const Pair& Other)const {
	if (first == Other.first)
		return second < Other.second;
	else
		return first < Other.first;
}
bool Pair :: operator ==(const Pair& Other)const {
	return second == Other.second && first == Other.first;
}

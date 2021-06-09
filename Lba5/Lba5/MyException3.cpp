#include"MyException3.h"
MyException3::MyException3(const string& message) :invalid_argument(message) {}
MyException3::~MyException3() = default;
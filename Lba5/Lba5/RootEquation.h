#pragma once
#include"MyException.h"
#include"MyException2.h"
#include"MyException3.h"
/**
* \brief Функция возвращает корень линеного уравнения, спецификатор не определён
* \param a коэфицент при x 
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation1(double a, double b);

/**
* \brief Функция возвращает корень линеного уравнения, cпецификатор throw
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation2(double a, double b);

/**
* \brief Функция возвращает корень линеного уравнения, со стандартным исключением
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation3(double a, double b);

/**
* \brief Функция возвращает корень линеного уравнения, пустой класс
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation4(double a, double b);

/**
* \brief Функция возвращает корень линеного уравнения, с полями-параметрами
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation5(double a, double b);

/**
* \brief Функция возвращает корень линеного уравнения, как наследник
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation6(double a, double b);
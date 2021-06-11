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
double RootEquation1(const double a, const double b);

/**
* \brief Функция возвращает корень линеного уравнения, cпецификатор throw
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation2(const double a, const double b);

/**
* \brief Функция возвращает корень линеного уравнения, со стандартным исключением
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation3(const double a, const double b);

/**
* \brief Функция возвращает корень линеного уравнения, пустой класс
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation4(const double a, const double b);

/**
* \brief Функция возвращает корень линеного уравнения, с полями-параметрами
* \param a коэфицент при x
* \param b свободный член
* \return Корень линеного уравнения
*/
double RootEquation5(const double a, const double b);
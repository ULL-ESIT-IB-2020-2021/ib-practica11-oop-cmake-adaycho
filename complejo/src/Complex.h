/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Aday Chocho Aisa
  * @date 3/01/2021
  * @brief El programa opera mediante la clase complejo. Te permite sumar y restar complejos.
  * @bug No hay bugs conocidos
  * @see 
  */

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex{
  private:
    int _realN;
    int _imaginaryN;
  public:
    Complex(): _realN(0), _imaginaryN(0) {};
    Complex(int realN, int imaginaryN): _realN(realN), _imaginaryN(imaginaryN) {};
    void print();

    friend Complex operator+(const Complex &c1, const Complex &c2);
    friend Complex operator-(const Complex &c1, const Complex &c2);
};

#endif
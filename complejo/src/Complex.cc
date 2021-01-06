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

#include "Complex.h"

///Métodos que permiten usar los operador + y -

Complex operator+(const Complex &c1, const Complex &c2){
  return Complex(c1._realN + c2._realN, c1._imaginaryN + c2._imaginaryN);
}
Complex operator-(const Complex &c1, const Complex &c2){
  return Complex(c1._realN - c2._realN, c1._imaginaryN - c2._imaginaryN);
}

///Meétodo que imprime el número complejo

void Complex::print() {       
  if (_imaginaryN <= 0) {
    std::cout << _realN  << _imaginaryN << "i" << std::endl;
  }
  if (_imaginaryN > 0) {
    std::cout << _realN << " + " << _imaginaryN << "i" << std::endl;
  }
}

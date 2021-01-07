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

#include "Complex.cc"

int main (){       ///El programa sua y resta los números complejos complexnumb1 y complexnumb2
  Complex complexnumb1 (2, -3);
  Complex complexnumb2 (7, 2);

  Complex result {0, 0};
  result= add(complexnumb1, complexnumb2);
  result.print();
  result= sub(complexnumb1, complexnumb2);
  result.print();
return 0;
}
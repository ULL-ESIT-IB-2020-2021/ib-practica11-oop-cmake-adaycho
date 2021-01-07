/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Aday Chocho Aisa
  * @date 6/01/2021
  * @brief El programa pide un documento txt con números racionales distribuidos de la manera 'a/b c/d'.
  *        Te devuelve la suma, resta, multiplicación y división en otro fichero de texto,
  * @bug No hay bugs conocidos
  * @see 
  */

#include "RacionalClass.h"

void Racional::simplificar (){
  int n;
  bool nodivisores = false;
  while (nodivisores == false) {
    if(_numerador == 1 || _denominador == 1){
      return;
    }
    if(abs(_numerador) < abs(_denominador)) {
      n = abs(_numerador);
    }
    else if (abs(_numerador) > abs(_denominador)) {
      n = abs(_denominador);
    }
    else if (abs(_numerador) == abs(_denominador)) {
      if (_numerador < _denominador || _denominador < _numerador) {
      _denominador = -1;
      _numerador = 1;
      }
      else {
      _denominador = 1;
      _numerador = 1;
      }
      return;
    }
    for (int i = 2; i <= n ; ++i){
      if(_numerador % i == 0 && _denominador % 4 == 0) {
        _numerador = _numerador / i;
        _denominador = _denominador / i;
        break;
      }
      if (i == n) {
        return;
      }
    }
  }  
}

void compare(const Racional &racional1, const Racional &racional2) {
  if(racional1._numerador/racional1._denominador > racional2._numerador/racional2._denominador) {
    std::cout << racional1._numerador << "/" << racional1._denominador << " es mayor." << std::endl;
  }
  else if(racional1._numerador/racional1._denominador < racional2._numerador/racional2._denominador) {
    std::cout << racional2._numerador << "/" << racional2._denominador << " es mayor." << std::endl;
  }
  else{
    std::cout << "Los racionales son equivalentes" << std::endl;
  }
}
 
   
Racional operator+(const Racional &racional1, const Racional &racional2){
  int numerador_final {racional1._numerador * racional2._denominador + racional2._numerador * racional1._denominador};
  int denominador_final {racional1._denominador*racional2._denominador};
  Racional resultado (numerador_final,denominador_final);
  resultado.simplificar();
  return resultado;
}
Racional operator-(const Racional &racional1, const Racional &racional2){
  int numerador_final {racional1._numerador * racional2._denominador - racional2._numerador * racional1._denominador};
  int denominador_final {racional1._denominador*racional2._denominador};
  Racional resultado (numerador_final,denominador_final);
  resultado.simplificar();
  return resultado;
}
Racional operator*(const Racional &racional1, const Racional &racional2){
  int numerador_final {racional1._numerador * racional2._numerador };
  int denominador_final {racional1._denominador*racional2._denominador};
  Racional resultado (numerador_final,denominador_final);
  resultado.simplificar();
  return resultado;
}
Racional operator/(const Racional &racional1, const Racional &racional2){
  int numerador_final {racional1._numerador * racional2._denominador };
  int denominador_final {racional1._denominador*racional2._numerador};
  Racional resultado (numerador_final,denominador_final);
  resultado.simplificar();
  return resultado;
}
Racional operator>>(std::string linea, const Racional &racional){
  int mid_pos = linea.find_first_of("/");
  int racional1_int = std::stoi(linea.substr(0, mid_pos));
  int racional2_int =std::stoi(linea.substr(mid_pos + 1));
  Racional resultado(racional1_int, racional2_int);
  return resultado;
}
std::ostream& operator<<(std::ostream& os, const Racional &racional1){
  os << racional1._numerador + "/" + racional1._denominador;
  return os;
}
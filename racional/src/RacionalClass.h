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

#ifndef RACIONALCLASS_H
#define RACIONALCLASS_H

#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

class Racional{
  private:
    int _numerador;
    int _denominador;
    
  public:
    Racional(): _numerador(0), _denominador(1) {};
    Racional(int numerador,int denominador): _numerador(numerador), _denominador(denominador) {};
    void simplificar();

    friend void compare(const Racional &racional1, const Racional &racional2);
    friend Racional operator+(const Racional &racional1, const Racional &racional2);
    friend Racional operator-(const Racional &racional1, const Racional &racional2);
    friend Racional operator*(const Racional &racional1, const Racional &racional2);
    friend Racional operator/(const Racional &racional1, const Racional &racional2);
    friend Racional operator>>(std::string linea, const Racional &racional);
    friend std::ostream& operator<<(std::ostream& os, const Racional &racional);
};

#endif
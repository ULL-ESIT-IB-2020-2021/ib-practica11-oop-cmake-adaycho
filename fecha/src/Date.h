/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Aday Chocho Aisa
  * @date 2/01/2021
  * @brief El programa pide que introduca una fehca(día, mes, año), un número N y el nombre de un archivo .txt.
  *        Con ello, te crea el archivo txt con las N fechas próximas a la establecida anteriormente.
  * @bug No hay bugs conocidos
  * @see 
  */

#ifndef DATE_H
#define DATE_H

#include <iostream>


class Date{
  private:
    int _day;
    int _month;
    int _year;

  public:
    Date(): _day(0), _month(0), _year(0) {};
    Date(int day,int month,int year): _day(day), _month(month), _year(year) {};
    void print();
    void leapyear();
    void nextday();
    int GetDay() const;
    int GetMonth() const;
    int GetYear() const;
};

#endif
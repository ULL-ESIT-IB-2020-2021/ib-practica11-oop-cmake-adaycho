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


#include "Date.h"

///Getters de los valores día, mes y año

int Date::GetDay () const {
  return _day;
}
int Date::GetMonth() const{
  return _month;
}
int Date::GetYear() const{
  return _year;
}

///Metodo para imprimir la fecha por pantalla

void Date::print(){
  std::cout << _day << "/" << _month << "/" << _year <<std::endl;
}

///Método que devuelve por pantalla si es un año bisiesto o no

void Date::leapyear(){                                             
  if(_year % 4 == 0 && _year % 100 != 0){
    std::cout << _year << " is a leap-year" << std::endl;
  }
  else if(_year % 400 == 0){
    std::cout << _year << " is a leap-year" << std::endl;
  }
  else {
    std::cout << _year << " isn't a leap-year" << std::endl;
  }
}

///Metodo que devuelve el siguiente día del año respecto al introducido como clase Date

void Date::nextday (){

  ++_day;
  if(_day > 31 && (_month == 1 ||_month == 3 ||_month == 5 ||_month == 7 ||_month == 8 ||_month == 10 ||_month == 12)){
    _day = 1;
    ++_month;
  }
  if(_day > 30 && (_month == 4 ||_month == 6 ||_month == 9 ||_month == 11)){
    _day = 1;
    ++_month;
  }
  if(_day > 29 && _month == 2 && ((_year % 4 == 0 && _year % 100 != 0)||_year % 400 == 0)){
    _day = 1;
    ++_month;
  }
  if(_day > 28 && _month == 2 && (_year % 4 != 0 || (_year % 400 != 0 && _year % 100 == 0))){
    _day = 1;
    ++_month;
  }
  if(_month > 12){
    _month = 1;
    ++_year;
  }
}

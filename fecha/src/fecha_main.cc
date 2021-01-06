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
#include <fstream>
#include <string>

int main(int argc, char* argv[]){

  if(argc >= 6) {
    std::ofstream file;                                                               ///Crea el archivo txt para introducir las fechas
    file.open(argv[5],std::ios::out);

    int ndate = std::stoi(argv[4]);                                                   ///Número de fechas a escribir en el texto

    Date actualdate(std::stoi(argv[1]), std::stoi(argv[2]), std::stoi(argv[3]));      ///Crea la fecha en la clase DAte

    for(int i = 0; i < ndate; ++i) {                                                  ///Se suma un día y se imprime en el texto
      actualdate.nextday();    
      file << actualdate.GetDay() << "/" << actualdate.GetMonth() << "/" << actualdate.GetYear() <<std::endl;
    }
    file.close();                                                                     ///Se cierra el archivo
  } 
  else if(argc < 6) {
    std::string help = argv[1];
    if(help == "--help") {
      std::cout << "El programa pide que introduca una fehca(día, mes, año), un número N y el nombre de un archivo .txt." << std::endl;
      std::cout << "Con ello, te crea el archivo txt con las N fechas próximas a la establecida anteriormente." << std::endl;
      std::cout << "./fechas 'dia' 'mes' 'año' 'número de fechas posteriores' 'nombre.txt' " << std::endl;
    }
    else {
      std::cout << "./fechas - Gestión de fechas" << std::endl;
      std::cout << "Modo de uso: ./fechas dd/mm/aa N fichero_salida.txt" << std::endl;
      std::cout << "Pruebe ./fechas --help para más información" << std::endl;
    }
  } 
}

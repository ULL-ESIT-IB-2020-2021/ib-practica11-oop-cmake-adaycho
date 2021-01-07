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

 
int main(int argc, char* argv[]){
  if(argc >= 3) { 
    std::string linea;
    std::string texto1 = argv[1];
    std::ifstream infile(texto1);
    std::string texto2 = argv[2];
    std::ofstream outfile(texto2);
    Racional racional1;
    Racional racional2;

    while(getline(infile, linea)) {
      int mid_pos = linea.find_first_of(" ");
      std::string racional1_string = linea.substr(0, mid_pos);
      std::string racional2_string =linea.substr(mid_pos + 1);

      racional1_string >> racional1;
      racional2_string >> racional2;

      Racional racsum = racional1 + racional2;
      Racional racrest = racional1 - racional2;
      Racional racmult = racional1 * racional2;
      Racional racdiv = racional1 / racional2;

      outfile << racional1_string << " + " << racional2_string << " = " << racsum << std::endl;
      outfile << racional1_string << " - " << racional2_string << " = " << racrest << std::endl;
      outfile << racional1_string << " * " << racional2_string << " = " << racmult << std::endl;
      outfile << racional1_string << " / " << racional2_string << " = " << racdiv << std::endl;
    }
    outfile.close(); 
    infile.close();
    
  } 
  else if(argc < 3) {
    std::string help = argv[1];
    if(help == "--help") {
      std::cout << "./racionales -- Números Racionales" << std::endl;
      std::cout << "Modo de uso: ./racionales fichero_entrada fichero_salida " << std::endl << std::endl;
      std::cout << "fichero_entrada: Fichero de texto conteniendo líneas con un par de números racionales: `a/b c/d` separados por un espacio" << std::endl;
      std::cout << "fichero_salida:  Fichero de texto que contendrá líneas con las operaciones realizadas: `a/b + c/d = n/m`" << std::endl;
    }
    else {
      std::cout << "./racionales -- Números Racionales" << std::endl;
      std::cout << "Modo de uso: ./racionales fichero_entrada fichero_salida" << std::endl;
      std::cout << "Pruebe ./racionales --help para más información" << std::endl;
    }
  } 
}
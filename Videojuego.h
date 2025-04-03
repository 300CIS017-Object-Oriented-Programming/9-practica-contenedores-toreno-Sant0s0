//
// Created by Santi on 4/1/2025.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
#include <string>
using namespace std;

class Videojuego {
  private:
    int codigo;
    string nombre;
    string genero;
    int niveldificultad;
    public:
      Videojuego();
      Videojuego(int codigo, string nombre, string genero, int niveldificultad);
      int getcodigo();
      string getnombre();
      string getgenero();
      int getniveldificultad();
};


#endif //VIDEOJUEGO_H

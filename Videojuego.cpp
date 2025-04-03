//
// Created by Santi on 4/1/2025.
//

#include <iostream>
#include <string>
#include "Videojuego.h"
using namespace std;

Videojuego::Videojuego() {
  codigo = 0;
  nombre = "";
  genero = "";
  niveldificultad = 0;
}
Videojuego::Videojuego(int codigo, string nombre, string genero, int niveldificultad) {
  this->codigo = codigo;
  this->nombre = nombre;
  this->genero = genero;
  this->niveldificultad = niveldificultad;
}
int Videojuego::getcodigo() {
  return codigo;
}
string Videojuego::getnombre() {
  return nombre;
}
string Videojuego::getgenero() {
  return genero;
}
int Videojuego::getniveldificultad() {
  return niveldificultad;
}
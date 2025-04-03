//
// Created by Santi on 4/1/2025.
//


#include <iostream>
#include <string>
#include <vector>
#include "Videojuego.h"
#include "Jugador.h"

using namespace std;
Jugador::Jugador(){
  nickname = "";
  nivelranking = 0;
}
Jugador::Jugador(string nickname, int nivelranking){
  this->nickname = nickname;
  this->nivelranking = nivelranking;
}
string Jugador::getNickname() {
  return nickname;
}
int Jugador::getNivelRanking() {
  return nivelranking;
}
void Jugador::inscribirVideojuego(Videojuego* juego) {
  juegos.push_back(juego);
}

void Jugador::mostrarJuegos() {
  for (int i = 0; i < juegos.size(); i++) {
    cout << juegos[i]->getnombre() << endl;
  }
}
int Jugador::mostrarPromedioDificultad() {
  int suma = 0;
  for (int i = 0; i < juegos.size(); i++) {
    suma += juegos[i]->getniveldificultad();
  }
  int promedioDificultad = suma / juegos.size();
  return promedioDificultad;
}
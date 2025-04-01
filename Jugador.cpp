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
vector<Videojuego*> Jugador::getJuego() {
  return juego;
}

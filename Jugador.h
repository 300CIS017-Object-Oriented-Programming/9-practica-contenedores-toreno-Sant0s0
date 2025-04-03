//
// Created by Santi on 4/1/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>
#include <vector>
#include "Videojuego.h"
using namespace std;

class Jugador{
  private:
    string nickname;
    int nivelranking;
    vector<Videojuego*> juegos;
  public:
    Jugador();
    Jugador(string nickname, int nivelranking);
    string getNickname();
    int getNivelRanking();
    void inscribirVideojuego(Videojuego* juego);
    void mostrarJuegos();
    int mostrarPromedioDificultad();
};


#endif //JUGADOR_H

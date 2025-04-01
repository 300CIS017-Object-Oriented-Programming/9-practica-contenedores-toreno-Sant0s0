//
// Created by Santi on 4/1/2025.
//

#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Jugador.h"
#include "Videojuego.h"
using namespace std;



class Torneo {
  private:
    map<string, Videojuego*> juego;
    map<string, Jugador*> jugador;
    public:
    Torneo();
    void registrarVideojuego();
    void registrarJugador();

};
#endif //TORNEO_H
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
    map<int, Videojuego*> juegos;
    map<string, Jugador*> jugadores;
    public:
    Torneo();
    void registrarVideojuego();
    void registrarJugador();
    void inscribirJugador();
    void mostrarJuegos();
    void mostrarPromedioDificultad();
    void inicializar();
    void mostrarRanking();
};
#endif //TORNEO_H
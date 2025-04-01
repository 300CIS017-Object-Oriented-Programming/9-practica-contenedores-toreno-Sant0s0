//
// Created by Santi on 4/1/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Jugador.h"
#include "Videojuego.h"
#include "Torneo.h"
using namespace std;

Torneo::Torneo(){
}
void Torneo::registrarJugador(){
    string nickname;
    int nivelranking;
    cout << "Ingrese el nombre del jugador: \n";
    cin >> nickname;
    cout << "Ingrese el ranking del jugador: \n";
    cin >> nivelranking;
    Jugador* nuevoJugador = new Jugador(nickname, nivelranking);
    this->jugador[nickname] = nuevoJugador;
    cout << "Jugador " << nickname << " registrado con éxito.\n";
}
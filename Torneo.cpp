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
void Torneo::registrarVideojuego(){
  int codigo = juegos.size() + 101;
  string nombre;
  string genero;
  int niveldificultad;
  cout << "Ingrese el nombre del videojuego: \n";
  cin >> nombre;
  cout << "Ingrese el genero del videojuego: \n";
  cin >> genero;
  cout << "Ingrese el nivel de dificultad del videojuego: \n";
  cin >> niveldificultad;
  Videojuego* nuevoVideojuego = new Videojuego(codigo, nombre, genero, niveldificultad);
  this->juegos[codigo] = nuevoVideojuego;
}
void Torneo::registrarJugador(){
    string nickname;
    int nivelranking;
    cout << "Ingrese el nombre del jugador: \n";
    cin >> nickname;
  if (jugadores.find(nickname) == jugadores.end()){
    cout << "Ingrese el ranking del jugador: \n";
    cin >> nivelranking;
    Jugador* nuevoJugador = new Jugador(nickname, nivelranking);
    this->jugadores[nickname] = nuevoJugador;
    cout << "Jugador " << nickname << " registrado con éxito.\n";
    }
    else{
      cout << "Ya existe un jugador con este nickname\n";
    }
  }
void Torneo::inscribirJugador(){
  if (jugadores.size() >0){
    string nickname;
    int codigo;
    cout << "Ingrese el nombre del jugador: \n";
    cin >> nickname;
    cout << "Ingrese el codigo del videojuego: \n";
    cin >> codigo;
    if (jugadores.find(nickname) != jugadores.end()){
        jugadores[nickname]->inscribirVideojuego(juegos[codigo]);
    }
    else{
      cout << "el videojuego no existe\n";
    }
  }
}
void Torneo::mostrarJuegos(){
  string nickname;
  cout << "Ingrese el nombre del jugador: \n";
  cin >> nickname;
  if (jugadores.find(nickname) != jugadores.end()){
    jugadores[nickname]->mostrarJuegos();
  }
  else{
    cout << "el jugador no existe\n";
  }
}
void Torneo::mostrarPromedioDificultad(){
  string nickname;
  cout << "Ingrese el nombre del jugador: \n";
  cin >> nickname;
  if (jugadores.find(nickname) != jugadores.end()){
    jugadores[nickname]->mostrarPromedioDificultad();
  }
  else{
    cout << "el jugador no existe\n";
  }
}

void Torneo::mostrarRanking() {
  string nickname;
  cout << "Ingrese el nombre del jugador: \n";
  cin >> nickname;
  if (jugadores.find(nickname) != jugadores.end()) {
    cout << "El ranking del jugador " << jugadores[nickname]->getNickname() << " es de " <<jugadores[nickname]->getNivelRanking() << "\n";
  }
  else {
    cout << "el jugador no existe\n";
  }
}



void Torneo::inicializar() {
  Videojuego* juego1 = new Videojuego(101, "FIFA 24", "Deportes", 7);
  Videojuego* juego2 = new Videojuego(102, "Minecraft", "Sandbox", 5);
  Videojuego* juego3 = new Videojuego(103, "Dark Souls", "RPG", 10);

  juegos[101] = juego1;
  juegos[102] = juego2;
  juegos[103] = juego3;

  Jugador* jugador1 = new Jugador("Santiago", 30);
  Jugador* jugador2 = new Jugador("Luisa", 40);
  Jugador* jugador3 = new Jugador("Jorge", 50);

  this->jugadores["Santiago"] = jugador1;
  this->jugadores["Luisa"] = jugador2;
  this->jugadores["Jorge"] = jugador3;

  jugador1->inscribirVideojuego(juego1);
  jugador1->inscribirVideojuego(juego2);
  jugador2->inscribirVideojuego(juego2);
  jugador2->inscribirVideojuego(juego3);
  jugador3->inscribirVideojuego(juego1);
  jugador3->inscribirVideojuego(juego3);
}
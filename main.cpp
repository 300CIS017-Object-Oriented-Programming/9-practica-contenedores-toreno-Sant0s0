#include <iostream>
#include "Torneo.h"

using namespace std;

void Menu() {
    cout << "\n--- MENU ---\n";
    cout << "1. Registrar un videojuego\n";
    cout << "2. Registrar un jugador\n";
    cout << "3. Inscribir un jugador a un videojuego\n";
    cout << "4. Mostrar los videojuegos en los que participa un jugador\n";
    cout << "5. Calcular y mostrar el promedio de dificultad de los videojuegos de un jugador\n";
    cout << "6. Mostrar el ranking de un jugador\n";
    cout << "7. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    Torneo torneo;
    torneo.inicializar();
    int opcion;

    do {
        Menu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                torneo.registrarVideojuego();
            break;
            case 2:
                torneo.registrarJugador();
            break;
            case 3:
                torneo.inscribirJugador();
            break;
            case 4:
                torneo.mostrarJuegos();
            break;
            case 5:
                torneo.mostrarPromedioDificultad();
            break;
            case 6:
                torneo.mostrarRanking();
            break;
            case 7:
                cout << "Saliendo del programa...\n";
            break;
            default:
                cout << "Opcion no válida. Intente de nuevo.\n";
        }
    } while (opcion != 7);

    return 0;
}

#include <iostream>
using namespace std;

// Imprimimos el tablero de ajedrez 
void imprimirTablero(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "0";
            }
            else {
                cout << "1";
            }
        }
        cout << endl;
    }
}

// Main para ejecutar el programa 
int main() {
    char opcion;
    do {
        int n;

        // Mostrar menú
        cout << "---------- BIENVENIDO AL PROGRAMA ----------" << endl;
        cout << "=== Tablero de Ajedrez ===" << endl;
        cout << "1. Generar Tablero" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
        case '1': {
            cout << "Ingrese el tamaño del tablero (n): ";
            cin >> n;
            if (n > 0) {
                cout << "Tablero de Ajedrez " << n << "x" << n << ":" << endl;
                imprimirTablero(n);
            }
            else {
                cout << "El tamaño del tablero debe ser un número entero positivo." << endl;
            }
            break;
        }
        case '0': {
            cout << "Saliendo del programa..." << endl;
            break;
        }
        default: {
            cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
            break;
        }
        }

        cout << endl;

    } while (opcion != '0');

    return 0;
}
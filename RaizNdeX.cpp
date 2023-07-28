#include <iostream>
#include <cmath>

using namespace std;

// Calculamos la raíz n de x 
double calcularRaizN(int n, double x, int maxIteraciones) {
    // Declaración de Variables
    double min = 1.0;
    double max = x;
    double mid;

    for (int i = 0; i < maxIteraciones; i++) {
        mid = (min + max) / 2;
        double mid_n = pow(mid, n);

        if (mid_n > x) {
            max = mid;
        }
        else if (mid_n < x) {
            min = mid;
        }
        else {
            // En esta función encontramos lo que es la raíz exacta
            return mid;
        }
    }

    return mid;
}

int main() {
    char opcion;
    do {
        int n, maxIteraciones;
        double x;

        // Mostrar menú
        cout << " -------------- BIENVENIDO A ESTE PROGRAMA --------------" << endl;
        cout << "****** Cálculo de Raíz n de x ******" << endl;
        cout << "1. Calcular Raíz n de x" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
        case '1': {
            cout << "Ingrese el valor de n: ";
            cin >> n;

            cout << "Ingrese el valor de x: ";
            cin >> x;

            cout << "Ingrese el número máximo de iteraciones (mayor o igual que 10): ";
            cin >> maxIteraciones;

            if (maxIteraciones >= 10) {
                double raiz_n = calcularRaizN(n, x, maxIteraciones);
                cout << "El valor aproximado de la raíz " << n << " de " << x << " es: " << raiz_n << endl;
            }
            else {
                cout << "El número máximo de iteraciones debe ser mayor o igual que 10." << endl;
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

    return 0;
}

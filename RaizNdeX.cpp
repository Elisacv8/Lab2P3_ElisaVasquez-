#include <iostream>
#include <cmath>

using namespace std;

// Calculamos la ra�z n de x 
double calcularRaizN(int n, double x, int maxIteraciones) {
    // Declaraci�n de Variables
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
            // En esta funci�n encontramos lo que es la ra�z exacta
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

        // Mostrar men�
        cout << " -------------- BIENVENIDO A ESTE PROGRAMA --------------" << endl;
        cout << "****** C�lculo de Ra�z n de x ******" << endl;
        cout << "1. Calcular Ra�z n de x" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opci�n: ";
        cin >> opcion;

        switch (opcion) {
        case '1': {
            cout << "Ingrese el valor de n: ";
            cin >> n;

            cout << "Ingrese el valor de x: ";
            cin >> x;

            cout << "Ingrese el n�mero m�ximo de iteraciones (mayor o igual que 10): ";
            cin >> maxIteraciones;

            if (maxIteraciones >= 10) {
                double raiz_n = calcularRaizN(n, x, maxIteraciones);
                cout << "El valor aproximado de la ra�z " << n << " de " << x << " es: " << raiz_n << endl;
            }
            else {
                cout << "El n�mero m�ximo de iteraciones debe ser mayor o igual que 10." << endl;
            }
            break;
        }
        case '0': {
            cout << "Saliendo del programa..." << endl;
            break;
        }
        default: {
            cout << "Opci�n no v�lida. Por favor, seleccione una opci�n v�lida." << endl;
            break;
        }
        }

        cout << endl;

    } while (opcion != '0');

    return 0;
}

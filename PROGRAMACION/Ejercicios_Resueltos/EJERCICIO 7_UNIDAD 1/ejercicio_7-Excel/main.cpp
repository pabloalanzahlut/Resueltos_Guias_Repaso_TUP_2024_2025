#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de variables
    double cantidadDolares, valorDolar, totalDolares = 0, totalPesos = 0;
    char continuar;

    do {
        // Entrada de datos
        cout << "Ingrese la cantidad de d�lares comprados: ";
        cin >> cantidadDolares;

        cout << "Ingrese el valor del d�lar (en pesos argentinos): ";
        cin >> valorDolar;

        // Actualizar total de d�lares
        totalDolares += cantidadDolares;

        // Calcular total en pesos
        totalPesos = totalDolares * valorDolar;

        // Mostrar resultados
        cout << "\nResumen:\n";
        cout << "Total de d�lares ahorrados: " << totalDolares << " USD\n";
        cout << "Equivalente en pesos argentinos: " << totalPesos << " ARS\n";

        // Verificar si se desea continuar
        cout << "\n�Desea ingresar otra compra de d�lares? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}

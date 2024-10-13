#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double cantidadDolares, valorDolar, totalDolares = 0, totalPesos = 0;
    char continuar;

    do {
        // Entrada de datos
        cout << "Ingrese la cantidad de dólares comprados: ";
        cin >> cantidadDolares;

        cout << "Ingrese el valor del dólar (en pesos argentinos): ";
        cin >> valorDolar;

        // Actualizar total de dólares
        totalDolares += cantidadDolares;

        // Calcular total en pesos
        totalPesos = totalDolares * valorDolar;

        // Mostrar resultados
        cout << "\nResumen:\n";
        cout << "Total de dólares ahorrados: " << totalDolares << " USD\n";
        cout << "Equivalente en pesos argentinos: " << totalPesos << " ARS\n";

        // Verificar si se desea continuar
        cout << "\n¿Desea ingresar otra compra de dólares? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}

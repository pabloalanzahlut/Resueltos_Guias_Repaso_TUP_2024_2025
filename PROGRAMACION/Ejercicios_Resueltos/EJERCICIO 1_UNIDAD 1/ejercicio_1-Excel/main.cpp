#include <iostream>
using namespace std;

int main() {
    double montoSolicitado, tasaInteres = 0.35, totalPrestamo, ganancia;
    int plazo, numPrestamos = 0;
    double sumaGanancias = 0, promedioGanancia;
    double prestamoMayor = 0, prestamoMenor = 0;

    cout << "Ingrese el monto solicitado: ";
    cin >> montoSolicitado;

    cout << "Ingrese el plazo (en meses): ";
    cin >> plazo;

    // Calcular total del préstamo
    totalPrestamo = montoSolicitado + (montoSolicitado * tasaInteres * plazo);

    // Calcular ganancia de la empresa
    ganancia = totalPrestamo - montoSolicitado;

    // Actualizar la suma de ganancias y el número de préstamos
    sumaGanancias += ganancia;
    numPrestamos++;

    // Determinar el préstamo mayor y menor
    if (numPrestamos == 1) {
        prestamoMayor = totalPrestamo;
        prestamoMenor = totalPrestamo;
    } else {
        if (totalPrestamo > prestamoMayor) {
            prestamoMayor = totalPrestamo;
        }
        if (totalPrestamo < prestamoMenor) {
            prestamoMenor = totalPrestamo;
        }
    }

    // Calcular promedio de ganancia
    promedioGanancia = sumaGanancias / numPrestamos;

    // Mostrar resultados
    cout << "Total del préstamo: " << totalPrestamo << endl;
    cout << "Ganancia de la empresa: " << ganancia << endl;
    cout << "Préstamo mayor: " << prestamoMayor << endl;
    cout << "Préstamo menor: " << prestamoMenor << endl;
    cout << "Promedio de ganancia: " << promedioGanancia << endl;

    return 0;
}

#include <iostream>
#include <iomanip> // Para manipular la salida de moneda

using namespace std;

int main() {
    const int MESES = 6;    // Seis meses
    const int SERVICIOS = 3; // Suponiendo 3 servicios para la familia
    double gastos[MESES][SERVICIOS]; // Matriz para los gastos
    double totalMensual[MESES] = {0}; // Total por cada mes
    double gastoMayor = 0, gastoMenor = 0, sumaTotal = 0;
    double promedio = 0;

    // Ingresar los datos de los gastos
    for (int mes = 0; mes < MESES; mes++) {
        cout << "Ingrese los gastos para el mes " << mes + 1 << ":" << endl;
        for (int servicio = 0; servicio < SERVICIOS; servicio++) {
            cout << "  Servicio " << servicio + 1 << ": $";
            cin >> gastos[mes][servicio];
            totalMensual[mes] += gastos[mes][servicio]; // Sumar gastos del mes
        }
    }

    // Inicializar gasto mayor y menor con el primer valor
    gastoMayor = gastos[0][0];
    gastoMenor = gastos[0][0];

    // Calcular total, mayor, menor
    for (int mes = 0; mes < MESES; mes++) {
        sumaTotal += totalMensual[mes]; // Sumar al total general
        // Calcular mayor y menor
        for (int servicio = 0; servicio < SERVICIOS; servicio++) {
            if (gastos[mes][servicio] > gastoMayor) {
                gastoMayor = gastos[mes][servicio];
            }
            if (gastos[mes][servicio] < gastoMenor) {
                gastoMenor = gastos[mes][servicio];
            }
        }
    }

    // Calcular promedio
    promedio = sumaTotal / MESES;

    // Mostrar resultados
    cout << fixed << setprecision(2); // Formato de moneda
    for (int mes = 0; mes < MESES; mes++) {
        cout << "Total gastos del mes " << mes + 1 << ": $" << totalMensual[mes] << endl;
    }

    cout << "Gasto mayor: $" << gastoMayor << endl;
    cout << "Gasto menor: $" << gastoMenor << endl;
    cout << "Gasto promedio mensual: $" << promedio << endl;

    return 0;
}

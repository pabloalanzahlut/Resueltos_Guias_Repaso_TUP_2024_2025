#include <iostream>
using namespace std;

int main() {
    const int PRECIO_KILO = 4500;
    const int TOTAL_VENTAS = 20;
    int kgs, matesRegalados = 0;
    double precioPorKilo, totalPagar;
    string fecha, adicionalMate;

    for (int i = 0; i < TOTAL_VENTAS; i++) {
        // Entrada de datos
        cout << "Venta #" << (i+1) << endl;
        cout << "Fecha de la venta (DD/MM/AAAA): ";
        cin >> fecha;
        cout << "Kgs de yerba vendidos: ";
        cin >> kgs;

        // Calcular el precio por kilo (con descuento si corresponde)
        if (kgs > 10) {
            precioPorKilo = PRECIO_KILO * 0.98;  // Descuento del 2%
        } else {
            precioPorKilo = PRECIO_KILO;
        }

        // Calcular el total a pagar
        totalPagar = kgs * precioPorKilo;

        // Debug: imprimir el valor de totalPagar antes de la condición
        cout << "DEBUG - Total a pagar: $" << totalPagar << endl;

        // Determinar si se regala un mate
        if (totalPagar > 70000) {
            adicionalMate = "SÍ";
            matesRegalados++;
        } else {
            adicionalMate = "NO";
        }

        // Mostrar los resultados de la venta
        cout << "Fecha: " << fecha << endl;
        cout << "Kgs: " << kgs << endl;
        cout << "Precio por kilo: $" << precioPorKilo << endl;
        cout << "Total a pagar: $" << totalPagar << endl;
        cout << "Adicional Mate: " << adicionalMate << endl;
        cout << "---------------------------" << endl;
    }

    // Mostrar cantidad total de mates regalados
    cout << "Cantidad de mates regalados: " << matesRegalados << endl;

    return 0;
}

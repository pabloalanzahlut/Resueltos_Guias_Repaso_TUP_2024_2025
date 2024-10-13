#include <iostream>
using namespace std;

int main() {
    float importe, descuento, importe_final;

    // Leer el importe de la compra
    cout << "Ingrese el importe de la compra: ARS ";
    cin >> importe;

    // Condiciones para aplicar descuentos
    if (importe < 1000) {
        descuento = 0;  // No hay descuento
    }
    else if (importe >= 1000 && importe < 5000) {
        descuento = importe * 0.10;  // 10% de descuento
    }
    else {
        descuento = importe * 0.18;  // 18% de descuento
    }

    // Calcular el importe final
    importe_final = importe - descuento;

    // Mostrar el resultado
    cout << "El importe final con descuento es: ARS " << importe_final << endl;

    return 0;
}

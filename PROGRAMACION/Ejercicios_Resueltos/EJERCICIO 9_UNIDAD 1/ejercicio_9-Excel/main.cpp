#include <iostream>
#include <iomanip> // Para manejar el formato de moneda

using namespace std;

int main() {
    string fecha, producto;
    double precio, valorCuota, precioFinal;
    int cuotas;

    // Ingresar los datos
    cout << "Ingrese la fecha (DD/MM/AAAA): ";
    cin >> fecha;
    cout << "Ingrese el nombre del producto: ";
    cin >> producto;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    // Determinar el número de cuotas y el precio final
    if (precio < 18000) {
        cuotas = 2;
        precioFinal = precio;
        valorCuota = precioFinal / cuotas;
    }
    else if (precio < 50000) {
        cuotas = 3;
        precioFinal = precio;
        valorCuota = precioFinal / cuotas;
    }
    else if (precio < 85000) {
        cuotas = 6;
        precioFinal = precio * 0.97;  // Aplicar 3% de descuento
        valorCuota = precioFinal / cuotas;
    }
    else {
        cuotas = 9;
        precioFinal = precio * 1.05;  // Aplicar 5% de recargo
        valorCuota = precioFinal / cuotas;
    }

    // Mostrar los resultados
    cout << fixed << setprecision(2);  // Para mostrar el valor en formato moneda
    cout << "Fecha: " << fecha << endl;
    cout << "Producto: " << producto << endl;
    cout << "Precio: $" << precio << endl;
    cout << "Cuotas: " << cuotas << endl;
    cout << "Valor por cuota: $" << valorCuota << endl;
    cout << "Precio final: $" << precioFinal << endl;

    return 0;
}

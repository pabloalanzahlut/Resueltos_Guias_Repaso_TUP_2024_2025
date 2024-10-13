#include <iostream>
#include <iomanip>  // Para manipulación de formato
#include <string>
using namespace std;

struct Producto {
    string nombre;
    double precioAlta;
    double precioActualizado;
};

int main() {
    const int numProductos = 150;
    Producto productos[numProductos];
    double indiceInflacion;

    // Ingresar el índice de inflación
    cout << "Ingrese el índice de inflación (en %): ";
    cin >> indiceInflacion;

    // Ciclo para ingresar los productos y calcular el precio actualizado
    for (int i = 0; i < numProductos; i++) {
        cout << "\nIngrese el nombre del producto " << i + 1 << ": ";
        cin >> productos[i].nombre;

        cout << "Ingrese el precio de alta del producto: ";
        cin >> productos[i].precioAlta;

        // Calcular el precio actualizado
        productos[i].precioActualizado = productos[i].precioAlta * (1 + indiceInflacion / 100);
    }

    // Mostrar los productos con sus precios
    cout << fixed << setprecision(2);  // Configurar formato de salida a dos decimales
    cout << "\nLista de productos actualizados:\n";
    for (int i = 0; i < numProductos; i++) {
        cout << "Producto: " << productos[i].nombre
             << " | Precio de alta: $" << productos[i].precioAlta
             << " | Precio actualizado: $" << productos[i].precioActualizado << endl;
    }

    return 0;
}

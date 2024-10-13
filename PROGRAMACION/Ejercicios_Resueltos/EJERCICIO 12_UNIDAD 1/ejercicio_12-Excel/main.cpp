#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_VENTAS = 50;

int main() {
    string fecha[MAX_VENTAS], producto[MAX_VENTAS], medio_pago[MAX_VENTAS];
    int cantidad[MAX_VENTAS];
    float precio[MAX_VENTAS], total_pagar[MAX_VENTAS];

    // Inicialización de acumuladores
    int contador_efectivo = 0, contador_mp = 0, contador_transferencia = 0, contador_tc = 0;
    float recaudacion_efectivo = 0, recaudacion_mp = 0, recaudacion_transferencia = 0, recaudacion_tc = 0;
    float total_recaudado = 0;
    float total_producto[6] = {0}; // Para almacenar recaudación por producto
    string productos[6] = {"Pan Lactal", "Galletas", "Pan rallado", "Budín marmolado", "Pan de pebete", "Prepizza"};
    float precios[6] = {1800, 600, 850, 1300, 150, 900};

    for (int i = 0; i < MAX_VENTAS; i++) {
        cout << "Ingrese la fecha (DD/MM/AAAA): ";
        cin >> fecha[i];

        cout << "Ingrese el producto (Pan Lactal, Galletas, Pan rallado, Budín marmolado, Pan de pebete, Prepizza): ";
        cin >> producto[i];

        // Determinar el precio según el producto
        for (int j = 0; j < 6; j++) {
            if (producto[i] == productos[j]) {
                precio[i] = precios[j];
                total_producto[j] += precio[i]; // Acumular total por producto
                break;
            }
        }

        cout << "Ingrese la cantidad: ";
        cin >> cantidad[i];

        cout << "Ingrese el medio de pago (MERCADOPAGO, EFECTIVO, TRANSFERENCIA, TARJETA DE DÉBITO, TARJETA DE CRÉDITO): ";
        cin >> medio_pago[i];

        // Calcular total a pagar y aplicar recargos/descuentos
        if (medio_pago[i] == "MERCADOPAGO" || medio_pago[i] == "TARJETA DE CRÉDITO") {
            total_pagar[i] = cantidad[i] * precio[i] * 1.05; // Recargo del 5%
            recaudacion_mp += total_pagar[i];
            contador_mp++;
        } else if (medio_pago[i] == "EFECTIVO") {
            total_pagar[i] = cantidad[i] * precio[i] * 0.90; // Descuento del 10%
            recaudacion_efectivo += total_pagar[i];
            contador_efectivo++;
        } else if (medio_pago[i] == "TRANSFERENCIA") {
            total_pagar[i] = cantidad[i] * precio[i]; // Sin cambios
            recaudacion_transferencia += total_pagar[i];
            contador_transferencia++;
        } else {
            total_pagar[i] = cantidad[i] * precio[i]; // Sin cambios
            recaudacion_tc += total_pagar[i];
            contador_tc++;
        }

        total_recaudado += total_pagar[i];

        // Mostrar el total a pagar
        cout << fixed << setprecision(2);
        cout << "Total a pagar: $" << total_pagar[i] << endl;
        cout << endl;
    }

    // Mostrar resultados finales
    cout << "Resumen de Ventas:" << endl;
    cout << "Cantidad de ventas por medio de pago:" << endl;
    cout << "Efectivo: " << contador_efectivo << endl;
    cout << "MercadoPago: " << contador_mp << endl;
    cout << "Transferencia: " << contador_transferencia << endl;
    cout << "Tarjeta de Crédito: " << contador_tc << endl;

    cout << "\nRecaudación total por medio de pago:" << endl;
    cout << "Efectivo: $" << recaudacion_efectivo << endl;
    cout << "MercadoPago: $" << recaudacion_mp << endl;
    cout << "Transferencia: $" << recaudacion_transferencia << endl;
    cout << "Tarjeta de Crédito: $" << recaudacion_tc << endl;

    cout << "\nRecaudación total: $" << total_recaudado << endl;

    // Calcular precio promedio
    float precio_promedio = total_recaudado / (contador_efectivo + contador_mp + contador_transferencia + contador_tc);
    cout << "Precio promedio: $" << precio_promedio << endl;

    // Mostrar total recaudado por cada producto
    cout << "\nTotal recaudado por producto:" << endl;
    for (int j = 0; j < 6; j++) {
        cout << productos[j] << ": $" << total_producto[j] << endl;
    }

    return 0;
}

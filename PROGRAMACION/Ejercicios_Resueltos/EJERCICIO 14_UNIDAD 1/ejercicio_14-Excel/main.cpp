#include <iostream>
#include <string>
using namespace std;

int main() {
    const int max_clients = 100;
    string cod_cliente[max_clients];
    string nom_cliente[max_clients];
    int servicio_contratado[max_clients]; // 1 para pack 1, 2 para pack 2
    char adicional[max_clients]; // 's' para sí, 'n' para no
    string medio_pago[max_clients]; // "debito" o "credito"
    double total_pagar[max_clients];

    double suma_total = 0;
    int cantidad_futbol = 0;
    double max_precio = 0;
    string nombre_max_precio;

    for (int i = 0; i < max_clients; i++) {
        cout << "Ingreso de datos para el cliente " << (i + 1) << ":\n";
        cout << "Código Cliente: ";
        cin >> cod_cliente[i];

        // Obtener nombre del cliente
        if (cod_cliente[i] == "A001") nom_cliente[i] = "Crisan Viamonte";
        else if (cod_cliente[i] == "A002") nom_cliente[i] = "Juliana Rosas";
        else if (cod_cliente[i] == "A003") nom_cliente[i] = "Estefano Moreno";
        else if (cod_cliente[i] == "A004") nom_cliente[i] = "Agusna Perez";
        else if (cod_cliente[i] == "A005") nom_cliente[i] = "Estella Castellano";
        else if (cod_cliente[i] == "A006") nom_cliente[i] = "Franco Antón";
        else {
            cout << "Código de cliente inválido. Intente de nuevo.\n";
            i--; // Decrementar para volver a pedir datos
            continue; // Continuar con la siguiente iteración
        }

        cout << "Servicio Contratado (1 para PACK 1, 2 para PACK 2): ";
        cin >> servicio_contratado[i];

        // Calcular total_pagar
        if (servicio_contratado[i] == 1) total_pagar[i] = 25000;
        else if (servicio_contratado[i] == 2) total_pagar[i] = 40000;

        cout << "¿Contrató pack futbol? (s/n): ";
        cin >> adicional[i];

        if (adicional[i] == 's') {
            total_pagar[i] += 10000;
            cantidad_futbol++;
        }

        cout << "Medio de Pago (debito/credito): ";
        cin >> medio_pago[i];

        // Aplicar descuentos o recargos
        if (medio_pago[i] == "debito") {
            total_pagar[i] *= 0.96; // Descuento del 4%
        } else if (medio_pago[i] == "credito") {
            total_pagar[i] *= 1.05; // Recargo del 5%
        }

        // Actualizar estadísticas
        suma_total += total_pagar[i];
        if (total_pagar[i] > max_precio) {
            max_precio = total_pagar[i];
            nombre_max_precio = nom_cliente[i];
        }
    }

    // Calcular promedio
    double promedio = suma_total / max_clients;

    // Mostrar resultados
    cout << "\nPromedio a pagar: " << promedio << endl;
    cout << "Cantidad de clientes que contrataron el PACK FUTBOL: " << cantidad_futbol << endl;
    cout << "Cliente con mayor precio a pagar: " << nombre_max_precio << " con un importe de: " << max_precio << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    int codigo, facturasInternet = 0;
    float importe, importeTotal, gastoTotal = 0, mayorImporte = 0;
    string descripcion;
    string fechaVencimiento, fechaPago;
    char continuar;

    do {
        // Ingresar los datos
        cout << "Ingrese el codigo del servicio (1: Luz, 2: Agua, 3: Gas, 4: Internet, 5: Expensas, 6: ABL): ";
        cin >> codigo;

        cout << "Ingrese la fecha de vencimiento (dd/mm/aaaa): ";
        cin >> fechaVencimiento;

        cout << "Ingrese el importe: ";
        cin >> importe;

        cout << "Ingrese la fecha de pago (dd/mm/aaaa): ";
        cin >> fechaPago;

        // Determinar la descripción según el código
        if (codigo == 1) {
            descripcion = "Luz";
        } else if (codigo == 2) {
            descripcion = "Agua";
        } else if (codigo == 3) {
            descripcion = "Gas";
        } else if (codigo == 4) {
            descripcion = "Internet";
            facturasInternet++; // Contar las facturas de Internet
        } else if (codigo == 5) {
            descripcion = "Expensas";
        } else if (codigo == 6) {
            descripcion = "ABL";
        } else {
            descripcion = "Desconocido";
        }

        // Calcular el importe total (pago fuera de término suma 8%)
        if (fechaPago > fechaVencimiento) {
            importeTotal = importe * 1.08; // 8% de recargo
        } else {
            importeTotal = importe; // Pago en término
        }

        // Acumular el gasto total
        gastoTotal += importeTotal;

        // Determinar el importe más caro
        if (importeTotal > mayorImporte) {
            mayorImporte = importeTotal;
        }

        // Mostrar detalles
        cout << "Servicio: " << descripcion << endl;
        cout << "Importe total a pagar: " << importeTotal << endl;

        // Preguntar si desea ingresar otra factura
        cout << "Desea ingresar otra factura? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    // Mostrar resultados del semestre
    cout << "Gasto total del semestre: " << gastoTotal << endl;
    cout << "Importe mas caro: " << mayorImporte << endl;
    cout << "Cantidad de facturas de Internet: " << facturasInternet << endl;

    return 0;
}

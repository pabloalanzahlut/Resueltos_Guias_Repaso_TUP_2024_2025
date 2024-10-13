#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int MESES = 12;
    string fecha_vencimiento[MESES];
    double kw_consumidos[MESES];
    double costo_por_kw[MESES];
    double total_a_pagar[MESES];

    double kw_total = 0;
    double total_pagado = 0;
    double kw_max = 0;
    double kw_min = 1e9; // Un valor muy alto
    string fecha_kw_max, fecha_kw_min;

    for (int i = 0; i < MESES; i++) {
        cout << "Ingrese la fecha de vencimiento del mes " << (i + 1) << ": ";
        cin >> fecha_vencimiento[i];

        cout << "Ingrese KW consumidos del mes " << (i + 1) << ": ";
        cin >> kw_consumidos[i];

        cout << "Ingrese Costo por KW del mes " << (i + 1) << ": ";
        cin >> costo_por_kw[i];

        // Calcular total a pagar
        total_a_pagar[i] = kw_consumidos[i] * costo_por_kw[i];

        // Acumular KW total y total pagado
        kw_total += kw_consumidos[i];
        total_pagado += total_a_pagar[i];

        // Verificar KW máximo y mínimo
        if (kw_consumidos[i] > kw_max) {
            kw_max = kw_consumidos[i];
            fecha_kw_max = fecha_vencimiento[i];
        }
        if (kw_consumidos[i] < kw_min) {
            kw_min = kw_consumidos[i];
            fecha_kw_min = fecha_vencimiento[i];
        }
    }

    // Calcular promedios
    double kw_promedio = kw_total / MESES;
    double pago_promedio = total_pagado / MESES;

    // Mostrar resultados
    cout << fixed << setprecision(2);
    cout << "KW total consumidos: " << kw_total << endl;
    cout << "Total pagado: $" << total_pagado << endl;
    cout << "KW máximo consumido: " << kw_max << " en fecha " << fecha_kw_max << endl;
    cout << "KW mínimo consumido: " << kw_min << " en fecha " << fecha_kw_min << endl;
    cout << "KW promedio consumido: " << kw_promedio << endl;
    cout << "Pago promedio realizado: $" << pago_promedio << endl;

    return 0;
}

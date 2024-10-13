#include <iostream>
using namespace std;

int main() {
    const int maxCampamentos = 25;
    const int sueldoEneJun = 75000;
    const int sueldoJulDic = 90000;

    for (int i = 0; i < maxCampamentos; i++) {
        string mes;
        int alumnos, profesores = 0, sueldoProf = 0, sueldoTotal = 0;

        // Ingreso de datos
        cout << "Ingrese el mes del campamento: ";
        cin >> mes;
        cout << "Ingrese la cantidad de alumnos: ";
        cin >> alumnos;

        // Calcular cantidad de profesores
        if (alumnos < 10) {
            profesores = 2;
        } else if (alumnos <= 20) {
            profesores = 3;
        } else {
            profesores = 4;
        }

        // Determinar sueldo por profesor según el mes
        if (mes == "enero" || mes == "febrero" || mes == "marzo" || mes == "abril" ||
            mes == "mayo" || mes == "junio") {
            sueldoProf = sueldoEneJun;
        } else if (mes == "julio" || mes == "agosto" || mes == "septiembre" ||
                   mes == "octubre" || mes == "noviembre" || mes == "diciembre") {
            sueldoProf = sueldoJulDic;
        }

        // Calcular sueldo total
        sueldoTotal = profesores * sueldoProf;

        // Mostrar resultado
        cout << "Cantidad de profesores: " << profesores << endl;
        cout << "Sueldo total: $" << sueldoTotal << endl;
        cout << "----------------------------------" << endl;
    }

    return 0;
}

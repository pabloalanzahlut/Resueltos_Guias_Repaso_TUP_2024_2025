#include <iostream>

using namespace std;

int main()
{
    float mct, mcc, mcd, pmc, pmd;

    // Hacer un programa para ingresar por teclado los metros cuadrados totales de
    // un predio y los metros cuadrados cubiertos; luego calcular y mostrar por
    // pantalla el porcentaje de metros cuadrados cubiertos y el porcentaje de
    // metros cuadrados descubiertos.

    cout << "Ingrese los metros cuadrados totales" << endl;
    cin >> mct;
    cout << "Ingrese los metros cuadrados cubiertos" << endl;
    cin >> mcc;

    // Calculo porcentaje de metros cuadrados cubiertos
    pmc = mcc * 100 / mct;

    // Calculo de metros cuadrados descubiertos
    mcd = mct - mcc;

    // Calculo porcentaje de metros cuadrados descubiertos
    pmd = mcd * 100 / mct;

    cout << "El porcentaje de metros cuadrados cubiertos es: " << pmc << "%" << endl;
    cout << "El porcentaje de metros cuadrados descubiertos es: " << pmd << "%" << endl;

    return 0;
}

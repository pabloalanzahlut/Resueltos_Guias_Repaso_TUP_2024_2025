#include <iostream>

using namespace std;

int main()
{
    // Hacer un programa para ingresar cuatro números distintos y luego mostrar por
    // pantalla el mayor de ellos.

    float num1, num2, num3, num4;
    cout << "Ingrese cuatro numeros distintos: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    float mayor = num1;  // Supongamos que el primer número es el mayor

    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}

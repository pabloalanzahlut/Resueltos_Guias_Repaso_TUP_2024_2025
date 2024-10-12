#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar cinco números distintos y luego mostrar por
    //pantalla el mayor y el menor de ellos.

    float num1,num2,num3,num4,num5,M,m;

    cout << "Ingrese cinco numeros distintos por favor: " << endl;
    cin>>num1>>num2>>num3>>num4>>num5;

    // Inicializar M y m con el primer número ingresado
    M = m = num1;

    // Comparar los demás números para encontrar el mayor y el menor
    if (num2 > M) M = num2;
    if (num2 < m) m = num2;

    if (num3 > M) M = num3;
    if (num3 < m) m = num3;

    if (num4 > M) M = num4;
    if (num4 < m) m = num4;

    if (num5 > M) M = num5;
    if (num5 < m) m = num5;

    // Mostrar el mayor y el menor
    cout << "El número MAYOR es: " << M << endl;
    cout << "El número MENOR es: " << m << endl;




    return 0;
}

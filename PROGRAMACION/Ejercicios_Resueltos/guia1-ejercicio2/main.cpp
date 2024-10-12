#include <iostream>

using namespace std;

int main()
{
//Hacer un programa para solicitar por teclado un número y luego devolver su
//valor elevado al cubo. Nota: no olvides que sólo contamos con las cuatro operaciones básicas.

    //declarar variables
    float n1;
    float r;
    cout << "Ingrese un numero" << endl;
    cin>>n1;

    //realizar calculo
    r = n1*n1*n1;
    cout<< "El cubo es: "<< r<< endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
//Hacer un programa para solicitar por teclado un n�mero y luego devolver su
//valor elevado al cubo. Nota: no olvides que s�lo contamos con las cuatro operaciones b�sicas.

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

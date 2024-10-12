#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar un número y luego se emita un cartel por
    //pantalla “Positivo” si el número es mayor a cero, “Negativo” si el número es
    //menor a cero o “Cero” si el número es igual a cero.

    float numero;

    cout << "Ingrese un numerop por favor: " << endl;
    cin >> numero;
    if (numero > 0){
        cout << "POSITIVO";
    }else if (numero == 0){
        cout << "CERO";
    }else  {
        cout << "NEGATIVO";
    }
    cout << endl;

    return 0;
}

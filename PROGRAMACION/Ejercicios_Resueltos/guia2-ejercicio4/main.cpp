#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar un n�mero y luego se emita un cartel por
    //pantalla �Positivo� si el n�mero es mayor a cero, �Negativo� si el n�mero es
    //menor a cero o �Cero� si el n�mero es igual a cero.

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

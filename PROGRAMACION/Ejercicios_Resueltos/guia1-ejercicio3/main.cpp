#include <iostream>

using namespace std;

int main()
{   //Hacer un programa que permita ingresar el a�o actual y el a�o de la fecha de
    //nacimiento de una persona y luego calcule y emita por pantalla su edad.
    //Nota: no hay que tener en cuenta si la persona cumpli� a�os o no,
    //simplemente calcular.

    //declarar variables
    int anioActual, anioNacimiento, edad;

    cout << "Ingrese el a�o actual" << endl;
    cin>>anioActual;
    cout<<"Ingrese su a�o de nacimiento"<<endl;
    cin>>anioNacimiento;

    // Calcular la edad
    edad =  anioActual - anioNacimiento;

    // Mostrar el resultado
    cout<< "Su edad es: " <<edad<<endl;
    return 0;
}

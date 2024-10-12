#include <iostream>

using namespace std;

int main()
{   //Hacer un programa que permita ingresar el año actual y el año de la fecha de
    //nacimiento de una persona y luego calcule y emita por pantalla su edad.
    //Nota: no hay que tener en cuenta si la persona cumplió años o no,
    //simplemente calcular.

    //declarar variables
    int anioActual, anioNacimiento, edad;

    cout << "Ingrese el año actual" << endl;
    cin>>anioActual;
    cout<<"Ingrese su año de nacimiento"<<endl;
    cin>>anioNacimiento;

    // Calcular la edad
    edad =  anioActual - anioNacimiento;

    // Mostrar el resultado
    cout<< "Su edad es: " <<edad<<endl;
    return 0;
}

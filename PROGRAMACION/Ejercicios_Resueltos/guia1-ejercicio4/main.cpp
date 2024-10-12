#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa que permita ingresar los kilómetros existentes entre dos
    //ciudades y la velocidad promedio de un vehículo. Calcular y emitir por pantalla
    //el tiempo aproximado que demandará llegar de un punto a otro teniendo en
    //cuenta los datos ingresados.

    //declarar variables
    float km, velocidad, tiempo;

    cout << "Ingrese los kilometros entre una ciudad y otra (KMS)" << endl;
    cin>> km;
    cout<<"Ingrese la velocidad (KMS/H)"<< endl;
    cin>> velocidad;

    // Calcular el tiempo
    tiempo = km / velocidad;

    cout<<"El tiempon sera de: "<<tiempo<< " horas"<<endl;

    return 0;
}

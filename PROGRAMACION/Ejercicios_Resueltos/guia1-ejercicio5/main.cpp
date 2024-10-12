#include <iostream>

using namespace std;

int main()
{
    //Una casa de computación paga a sus empleados un sueldo fijo de ARS15000
    //más una comisión del 5% sobre el total facturado por cada empleado. Hacer un
    //programa para ingresar el total facturado por un empleado y que luego calcule
    //y emita por pantalla el sueldo total a cobrar por el mismo.

     //declarar variables
     float totalFacturado, comision, sueldoTotal;
     float const sueldoFijo = 15000;
     float const porcentajeComision = 0.05

    cout << "Ingrese el total facturado" << endl;
    cin totalFacturado;

    comision = totalFacturado*porcentajeComision;
    sueldoTotal=sueldoFijo+comision;

    cout<< "El sueldo total es :"<<sueldoTotal<<"pesos argentinos."<<endl;


    return 0;
}

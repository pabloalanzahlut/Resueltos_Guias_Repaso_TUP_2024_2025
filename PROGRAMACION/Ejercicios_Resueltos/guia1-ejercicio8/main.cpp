#include <iostream>

using namespace std;

int main()
{
    //Una importante cadena de delivery cuenta con una promoción por tiempo
    //limitado en la que otorga un 15% de descuento sobre el total del valor de la
    //compra realizada. Hacer un programa para solicitar el monto total y el mismo
    //calcule y emita por pantalla el total a cobrar con el descuento aplicado.

    float montoTotal, totalPagar;
    float const descuento = 0.85;

    cout << "Ingrese su monto total." << endl;
    cin>>montoTotal;

    //Calculo del total a cobrar con el descuento aplicado.

    totalPagar = montoTotal * descuento;

    cout<< "Su total a pagar con el descuento aplicado es: "<<totalPagar<<" pesos argentinos"<<endl;
    return 0;
}

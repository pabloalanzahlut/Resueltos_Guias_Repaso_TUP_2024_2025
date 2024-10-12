#include <iostream>

using namespace std;

int main()
{
    //Una casa de video juegos otorga un descuento dependiendo del importe de la
    //compra realizada según los siguientes valores:
    //• Si el importe es menor a ARS 1000, no hay descuento.
    //• Si el importe es ARS 1000 o más pero menor a ARS 5000, aplica un
    //descuento del 10%.
    //• Si el importe es ARS 5000 o más, aplica un descuento del 18%.
    //Hacer un programa para ingresar un importe de venta y luego muestre por
    //pantalla el importe final con el descuento que corresponda.

    float importeCompra, importeFinal;
    cout << "Ingrese el importe de la compra realizada: " << endl;
    cin >> importeCompra;

    if(importeCompra < 1000){
             importeFinal = importeCompra;  // No hay descuento, importeFinal es igual a importeCompra
    }else if(importeCompra<5000){
        importeFinal = importeCompra * 0.90; // 10% de descuento
    }else {
        importeFinal = importeCompra * 0.82; // 18% de descuento
    }
    cout<<"Importe final con descuento: "<<importeFinal<<endl;
    return 0;
}

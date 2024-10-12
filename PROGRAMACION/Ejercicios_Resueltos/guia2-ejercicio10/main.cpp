#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar cuatro números y luego mostrar por pantalla
    //cuáles son mayores a 100.

    float num1,num2,num3,num4;

    cout<<"Ingrese por pantalla cuatro numeros: "<<endl;
    cin>>num1>>num2>>num3>>num4;
    cout << "Los numeros mayores a 100 son: "<< endl;
    if(num1>100){
            cout<<num1<<endl;
    }
    if(num2>100){
        cout<<num2<<endl;
    }
    if(num3>100){
        cout<<num3<<endl;
    }
    if(num4>100)(
        cout<<num4)<<endl;

    return 0;
}

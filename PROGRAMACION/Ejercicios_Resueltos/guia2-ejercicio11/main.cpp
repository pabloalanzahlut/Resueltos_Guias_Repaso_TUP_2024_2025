#include <iostream>

using namespace std;

int main()
{

   //Hacer un programa para ingresar cuatro números y luego mostrar por pantalla
   //cuántos son menores a 100.

    float num1,num2,num3,num4;
    int a=0; // inicializar a en 0
    cout << "Ingrese cuatro numeros: " << endl;
    cin>>num1>>num2>>num3>>num4;

    if(num1<100){
        a++; // incrementar a si num1 es menor que 100
    }
    if(num2<100){
        a++; // incrementar a si num2 es menor que 100
    }
    if(num3<100){
        a++; // incrementar a si num3 es menor que 100
    }
    if(num4<100){
        a++; // incrementar a si num4 es menor que 100
    }

    cout<<"Tenemos: "<<a<<" menores a 100."<<endl;

    return 0;
}

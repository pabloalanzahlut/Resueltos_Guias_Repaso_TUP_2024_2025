#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar cuatro números distintos y luego mostrar por
    //pantalla el menor de ellos.

    float num1, num2, num3, num4;
    cout << "Ingrese cuatro numeros distintos: " << endl;
    cin >> num1>>num2>>num3>>num4;

    float menor = num1;  // Supongamos que el primer número es el menor

    if(menor<num2){
        menor == num1;
    }else{
        menor==num2;
    }if(num3<menor){
        menor==num3;
    }if(num4<menor){
        menor ==num4;
    }else{
        cout<<"El numero menor es:"<<menor<<endl;
    }
    return 0;
    }




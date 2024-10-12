#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa que permita ingresar por teclado dos números y que luego
    //muestre por pantalla la suma, la resta, la multiplicación y la división de dichos
    //números. Se deben mostrar cuatro resultados en pantalla. Los números deben
    //ser solicitados una única vez.

    float num1,num2,resultSuma, resulResta, resulMultip, resulDivi;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    //Realizacion de las operaciones:
    //Suma:
    resultSuma = num1 + num2;

    //Resta:
    resulResta = num1 - num2;

    //Multiplicación:
    resulMultip = num1 * num2;

    //División:
    resulDivi = num1 / num2;

    cout<<"El resultado de la Suma es: "<<resultSuma<<endl;
    cout<<"El resultado de la Resta es: "<<resulResta<<endl;
    cout<<"El resultado de la Multiplicación es: "<<resulMultip<<endl;
    cout<<"El resultado de la División es: "<<resulDivi<<endl;


    return 0;
}

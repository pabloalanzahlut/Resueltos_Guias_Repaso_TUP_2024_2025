#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa que permita ingresar por teclado dos n�meros y que luego
    //muestre por pantalla la suma, la resta, la multiplicaci�n y la divisi�n de dichos
    //n�meros. Se deben mostrar cuatro resultados en pantalla. Los n�meros deben
    //ser solicitados una �nica vez.

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

    //Multiplicaci�n:
    resulMultip = num1 * num2;

    //Divisi�n:
    resulDivi = num1 / num2;

    cout<<"El resultado de la Suma es: "<<resultSuma<<endl;
    cout<<"El resultado de la Resta es: "<<resulResta<<endl;
    cout<<"El resultado de la Multiplicaci�n es: "<<resulMultip<<endl;
    cout<<"El resultado de la Divisi�n es: "<<resulDivi<<endl;


    return 0;
}

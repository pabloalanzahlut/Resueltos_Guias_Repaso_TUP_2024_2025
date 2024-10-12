#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar dos números distintos y
    //luego se muestre por pantalla el menor de ellos.

    float num1,num2;
    cout<<"Ingrese dos numeros ";
    cin>>num1;
    cout<<"Ingrese otro: ";
    cin>>num2;

    if(num1<num2){
       cout<<"El menor es: "<<num1;
   }else{
       cout<<"El menor es: "<<num2;
       }

    cout<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar dos números y que luego emita por pantalla
    //el mayor de ellos o un cartel aclaratorio “Son iguales” en el caso de que así sea.
    //Nota: los números pueden ser iguales.

    float a,b;
    cout<<"Ingrese dos numeros ";
    cin>>a;
    cout<<"Ingrese otro: ";
    cin>>b;

if(a==b){
        cout<<"Son iguales";
}else{
    if(a>b){
        cout<<"El mayor es el primero: "<<a;
    }else{
        cout<<"El mayor es el segundo: "<<b;
    }
}
    cout<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //Hacer un programa para ingresar un valor que estará expresado en minutos.
    //Si los minutos superan los 60, pasar el valor a horas, de lo contrario dejarlo en
    //minutos. Mostrar el resultado en pantalla aclarando si se muestran minutos u
    //horas.

    float minutos, horas;
    cout<<"Ingrese un valor en minutos"<<endl;
    cin>>minutos;

    if(minutos>60){
        horas = minutos/60;
        cout<<"Cantidad de horas: "<<horas<<endl;
    }else{
        cout<<"Cantidad de minutos: "<<minutos<<endl;
    }


    return 0;
}

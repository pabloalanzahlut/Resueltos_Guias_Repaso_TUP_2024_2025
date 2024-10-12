#include <iostream>

using namespace std;

int main()
{
    //declarar variables
    float n1,n2,n3;
    float promedio;
    cout << "Ingrese el primer numero" << endl;
    cin>>n1;
    cout << "Ingrese el segundo numero" << endl;
    cin>>n2;
    cout << "Ingrese el tercer numero" << endl;
    cin>>n3;

    //realizar calculo
    promedio = (n1+n2+n3)/3;
    cout<<"El promedio de notass es: "<<promedio;

    return 0;
}

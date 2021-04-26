#include <iostream>
using namespace std;
//Leer un numero entero y mostrar su mitad:
//Entrada       Salida
//5             2.5
//8             4
//1             0.5
int main()
{
    cout<<"Introduzca un numero:";
    float a,res;
    cin>>a;
    res=a/2;
    cout<<"la mitad es:"<<res;
    return 0;
}

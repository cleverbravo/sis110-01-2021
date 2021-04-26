#include <iostream>
using namespace std;
//Escribir un programa para dividir dos
//numeros enteros
int main()
{
    cout<<"Introduzca dos numeros";
    int a,b;
    cin>>a>>b;
    int c=a/b;//error no controlado
    cout<<"la division es:"<<c;
    return 0;
}

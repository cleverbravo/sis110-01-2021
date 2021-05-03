#include <iostream>
#include <cmath>
using namespace std;
/**
Escribir un programa para leer un numero entero
y mostrar por pantalla el digito del medio
Input       Output
423         2
101         0
2342        4
*/
int main()
{
    int n;
    cout<<"Introduzca un numero entero:\n";
    cin>>n;
    int digitos=log10(n)/2;
    int ultimo=n/(int)pow(10,digitos) % 10;
    cout<<"digito de medio:"<<ultimo;
    return 0;
}

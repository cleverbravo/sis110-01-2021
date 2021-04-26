#include <iostream>
#include <cmath>
using namespace std;
//Leer dos numeros enteros y mostrar por pantalla
//el primer dígito de cada número
//Entrada           Salida
//15  84            1,8
//5   307           5,3
//1000   7          1,7
int main()
{
    // 8754 =
    int numero,numero2;
    cin>>numero>>numero2;//un solo digito
    int n=log10(numero);
    int n2=log10(numero2);
    int digito=numero/pow(10,n);
    int digito2=numero2/pow(10,n2);
    cout<<digito<<","<<digito2;

    return 0;
}


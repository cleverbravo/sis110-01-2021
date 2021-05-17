#include <iostream>
using namespace std;
/**
Escribir un programa para determinar
si un numero entero leido por teclado
es primo.
Input       Output
2           es primo
3           es primo
4           no es primo
5           es primo
6           no es primo
*/
int main()
{
    int i=1,n,divisores=0;
    cout<<"Introduzca un numero entero\n";
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
            divisores++;
        i++;
    }
    if(divisores==2)
        cout<<"es primo";
    else
        cout<<"no es primo";
    return 0;
}

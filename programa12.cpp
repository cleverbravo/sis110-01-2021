#include <iostream>
using namespace std;
/**escribir un programa para leer dos numeros
enteros por teclado y mostrar por pantalla
el resultado de su division.
Entrada     Salida
6   2       3
10  5       2
100 5       20
5   2       2.5
5   0       infinito
0   0       indeterminado
*/
int main()
{
    int a,b;
    double r;
    cout<<"Introduzca dos numeros:";
    cin>>a>>b;
    if(b==0)
    {
        if(a==0)
        {
            cout<<"indeterminado";
        }
        else
        {
            cout<<"infito";
        }
    }
    else
    {
        r=a/(double)b;
        //cout.precision(5);
        //cout.setf(ios::fixed,ios::floatfield);
        cout<<"la division es:"<<r;
    }
    return 0;
}

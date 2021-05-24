/**
Escribir un programa para leer un numero entero n
mostrar la siguiente figura por pantalla
*
**
***
****
*****
...
***...*n
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Escribir un numero entero n:\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}

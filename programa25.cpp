/**
Escribir un programa para mostrar la
siguiente figura por pantalla
*
**
***
****
*****
...
*********
...
...
...
********************************
*/
#include <iostream>
using namespace std;
int main()
{
    for(int i=-4;i<5;i++)
    {
        for(int j=0;j<=i+4;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}

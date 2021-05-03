#include <iostream>
using namespace std;
/**
Escribir un programa para determinar si un numero es par
o impar
Input       Output
4           es par
5           es impar
*/
int main()
{
    int a;
    cin>>a;
    /**if(a%2==0)
        cout<<"es par";
    else
        cout<<"es impar";*/
    cout<<(a%2==0?"es par":"es impar");
    /*switch(a%2)
    {
        case 1:cout<<"es impar";break;
        case 0:cout<<"es par";break;
    }*/
    return 0;
}

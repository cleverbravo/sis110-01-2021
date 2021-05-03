#include <iostream>
using namespace std;
//Estructuras de control selectivas
//escribir un programa para leer un numero por teclado
//y mostrar por pantalla si es par o impar
//Entrada       Salida
//18            es par
//19            es impar
int main()
{
    int numero;
    cout<<"introduzca un numero:";
    cin>>numero;
    if(numero%2==0)
    {
        cout<<"es par";
    }
    else
    {
        cout<<"es impar";
    }
    return 0;
}

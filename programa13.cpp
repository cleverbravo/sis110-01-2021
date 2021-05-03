#include <iostream>
using namespace std;
/**Escribir un programa para introducir dos
numeros y una operacion aritmetica, el resultado
se debe mostrar por pantalla
Entrada     Salida
3 - 5       -2
8 / 4       2
**/
int main()
{
    double a,b;
    char operacion;
    cout<<"Introduzca una operacion aritmetica\n";
    cin>>a>>operacion>>b;
    switch(operacion)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            if(b==0)
            {
                if(a==0)
                    cout<<"Indeterminado.";
                else
                    cout<<"Infinito.";
            }
            else
            {
                cout<<a/b;
            }

            break;
    }
    return 0;
}

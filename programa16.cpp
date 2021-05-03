#include <iostream>
#include <cmath>
using namespace std;
/**
Escribir un programa para resolver una ecuacion
de segundo grado;
ax^2 + bx + c = 0
Input       Output

*/
int main()
{
    cout<<"Introduzca las constanstes de una ecuacion de segundo grado\n";
    double a,b,c,x1,x2;
    cin>>a>>b>>c;
    if(a==0)
    {
        cout<<"Error, no es ec. de 2do grado";
    }
    else
    {
        double d=(b*b-4*a*c);
        if(d>=0)
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            cout<<"x1="<<x1<<endl;
            cout<<"x2="<<x2<<endl;
        }
        else
        {
            cout<<"Error soluciones imaginarias";
        }
    }
    return 0;
}

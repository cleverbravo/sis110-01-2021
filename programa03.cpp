//tipos de datos
#include <iostream>
using namespace std;
int main()
{
    bool v;
    v=true;
    cout<<"v="<<v<<endl;
    v=false;
    cout<<"v="<<v<<endl;

    short s;
    s=32768;//2^16;1byte=>8bits
    cout<<"s="<<s<<endl;

    int i;//2^32 => 4 bytes
    i=2147483648;
    cout<<"i="<<i<<endl;

    long long largo;//2^64
    largo=9223372036854775807;
    cout<<"largo="<<largo<<endl;

    float f;//32 bits=>4 bytes
    f=314165454654234234234.18516;
    cout<<"f="<<f<<endl;
    //+/- 1.1754943x10^-38
    //+/- 3.4029823x10^38
    double d;//64 bits =>8 bytes
    d=314165454654234234234.18516;
    cout<<"d="<<d<<endl;

    char c;//1 byte[0-255],[-127,126]
    //1 caracter (letra)
    c=65;//ASCII
    cout<<"c="<<c<<endl;

    string cad;//tamaño variable
    cad="hola";
    cout<<"cad="<<cad<<endl;
    return 0;
}

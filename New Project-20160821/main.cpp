#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"¿Conversión de Fahrenheit a Celsius(1) o Celsius a Fahrenheit(2)?\n";
    cin>> a;
    if ( a==1) {
        cout<<("Ingrese grados Fahrenheit: \n");
        cin>> b,"\n";
        c = (b - 32)/1.8;
        cout<< c;
        cin.get();
    }
    else {
        cout<<("Ingrese grados Celsius: \n");
        cin>> b;
        c = (b * 1.8) + 32;
        cout<< c,"\n";
        cin.get();
    }
        
    return 0;
}
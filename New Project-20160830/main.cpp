#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    float x1,x2;
    float ecgen1,ecgen2;
    a=7;
    b=8;
    c=-11;
    ecgen1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    ecgen2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"Raíces de la ecuacion de segundo grado:\n";
    cout<< "X1= "<< ecgen1 << "X2= "<< ecgen2;
        
    return 0;
}
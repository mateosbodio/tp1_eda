/*
Ejercicio 12: Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que: f(a,b,c) =−𝑏+√(𝑏2−4𝑎𝑐)2𝑎
*/
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, X1, X2, Raiz;
    cout<<"Introduzca la variable a: "; cin>> a;
    cout<<"Introduzca la variable b: "; cin>> b;
    cout<<"Introduzca la variable c: "; cin>> c;
    Raiz = sqrt(pow(b,2)-4*a*c);
    X1= (-b+Raiz)/(2*a);
    X2= (-b-Raiz)/(2*a);
    cout<<endl <<"La raíz de "<<a<<"x^2+"<<b<<"x +"<<c<<" es:" << endl ;
    return 0;
}
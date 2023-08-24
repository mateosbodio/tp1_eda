/*
Ejercicio 13: Escribe la siguiente expresión en C++. Use precisión para redondear la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d))
*/
#include <iostream>;
using namespace std;
int main() {
float a,b,c,d,e,f, resultado=0;
cout<<"Digite el valor de a: "; cin>>a;
cout<<"Digite el valor de b: "; cin>>b;

resultado= (a/b)+1;
cout.precision(2);
cout<<"\n El resultado es: " <<resultado<<endl;

cout<<"Digite el valor de c: "; cin>>c;
cout<<"Digite el valor de d: "; cin>>d;

resultado= (a+b)/(c+d);
cout.precision(2);
cout<<"\n El resultado es: " <<resultado<<endl;

cout<<"Digite el valor de e: "; cin>>e;
cout<<"Digite el valor de f: "; cin>>f;

resultado= (a+(b/c))/(d+(e/f));
cout.precision(2);
cout<<"\n El resultado es: " <<resultado<<endl;

resultado= a + (b/(c-d));
cout.precision(2);
cout<<"\n El resultado es: " <<resultado<<endl;

return 0;
}    

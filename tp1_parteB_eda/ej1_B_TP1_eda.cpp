/*
Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.
*/
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
int numero;
do
{
    cout<<"Ingrese un numero: "; cin>> numero;
} while ((numero<1)||(numero>10));
for (int i = 0; i < 10; i++)
{
    cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
}
return 0;


}
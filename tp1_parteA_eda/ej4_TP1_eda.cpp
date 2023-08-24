/*
Ejercicio 4: Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida será el monto convertido a dólares. Tome la cotización actual de dólar blue, redondear a 2 cifras.
*/
#include<iostream>
using namespace std;
int main(int argc, char const*argv[])
{
float peso,dolar,conversion;
cout<<"ingrese los pesos argentinos: "; cin>> peso;
cout<<"ingrese el precio del dolar: ", cin>> dolar;
conversion = peso / dolar;
cout<< "el valor de la conversion es: " << conversion ;

    return 0;
}

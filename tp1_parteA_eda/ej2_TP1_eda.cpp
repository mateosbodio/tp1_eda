/*
Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar, el precio del producto al aplicarle el IVA.
*/
#include <iostream>
using namespace std;

float precio = 0;
float iva = 0.16;
float total = 0;

int main()
{
    cout << "Cual es el precio del producto? ";
    cin >> precio;
    total = precio * (1 + iva);
    cout << endl;
    cout << "El precio del producto es: " << precio << endl;
    cout << "El IVA es: " << iva * 100 << "%" << endl;
    cout << "El precio del producto con IVA es: " << total << endl;
    
    return 0;
}
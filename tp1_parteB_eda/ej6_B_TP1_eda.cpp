/*
Ejercicio 6: Escriba un programa que calcule num^exp, donde tanto num como exp son enteros positivos, sin utilizar la función pow. Donde num será una base generada de forma aleatoria entre 2 y 42, y exp será ingresada por teclado no mayor a 5. Usar las librerías stdlib.h y cmath.
*/
#include<iostream>

using namespace std;

int main(){
	int x,y,potencia=1;
	
	cout<<"Digite el valor de x seguido de su potencia y: ";cin>>x>>y;
	for(int i=1;i<=y;i++){
		potencia*=x;
	}
	
	cout<<"\nEl resultado de "<<x<<" a la "<<y<<" es: "<<potencia;
	
	return 0;
}
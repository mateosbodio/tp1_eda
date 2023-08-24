/*
Ejercicio 8: La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final. Permita ingresar por teclado N, la cantidad de alumnos a calificar.
*/
#include <iostream>
using namespace std;
int main(){
float practica, teorica, participacion;
cout<<"ingrese la nota de practica: "; cin >>practica;
cout<<"ingrese la nota teorica: "; cin >>teorica;
cout<<"ingrese la nota de participacion: "; cin >>participacion;

practica *= 0.30;
teorica *= 0.60 ;
participacion *= 0.10;

double nota_final = practica + teorica + participacion;
  cout<<"\n La nota final es: " <<nota_final;
    return 0;
}

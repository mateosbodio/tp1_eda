#include <iostream>
#include <string>
using namespace std;

int main(){
	int edad;
	char sexo;
	double altura;
	cout<< "Ingrese su edad: ";
	cin>> edad;
	cout<< " Ingrese Sexo M/F: ";
	cin>> sexo;
	cout<< "Ingrese su altura en mtrs: ";
	cin>> altura;
	string info_completa = edad + " " + sexo + " " +altura;
	return 0;
}
//Ejercicio 1:
// A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del usuario, además debe mostrar el nombre_completo por pantalla. (considera los espacios)
// B) Ejemplifique, como se coloca un comentario de una o varias líneas.
// C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.

#include <iostream>;
#include <string>;
using namespace std;

int main(){
string nombre,apellido;
cout<<"Ingrese su nombre: "<<endl;
getline(cin,nombre);
cout<< "Ingrese su apellido:" << endl;
getline(cin,apellido);
cout<<"Nombre y Apellido: "<< nombre <<" "<< apellido << endl;
return 0;
}
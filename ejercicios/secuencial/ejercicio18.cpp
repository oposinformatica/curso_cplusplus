//################################################################################
//Pedir el nombre y los dos apellidos de una persona y mostrar las iniciales.
//################################################################################
//An�lisis
//Hay que pedir el nombre y los apellidos, y mostrar las iniciales. 
//Primer car�cter de cada cadena.
//Datos de entrada: nombre y apellidos (cadena)
//Informaci�n de salida: Iniciales (cadena)
//Variables: nombre, apellido1, apellido2, inicial (cadena).
//################################################################################
//Dise�o
//1. Leer nombre y apellidos
//2. Obtener primer car�cter de cada cadena
//3. Concatenar los caracteres
//4. Mostrar iniciales
//################################################################################

#include<iostream>
#include<cctype>
using namespace std;
int main(int argc, char *argv[]) {
	string apellido1;
	string apellido2;
	string inicial;
	string nombre;
	cout << "Dime tu nombre:";
	cin >> nombre;
	cout << "Dime tu primer apellido:";
	cin >> apellido1;
	cout << "Dime tu segundo apellido:";
	cin >> apellido2;
	inicial = toupper(nombre.substr(0,1)[0]);
	inicial = inicial+char(toupper(apellido1.substr(0,1)[0]));
	inicial = inicial+char(toupper(apellido2.substr(0,1)[0]));
	cout << "Las iniciales son: " << inicial << endl;
	return 0;
}
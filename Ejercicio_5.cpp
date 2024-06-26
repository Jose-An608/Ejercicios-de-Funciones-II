/* Ejercicio 5: Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada
calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde
se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si
las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y
actualizar las variables correspondientes.*/

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void calcularRaices(int x, int y, int z){

int dc;
double x1, x2, x3, x4, discriminante;

discriminante = pow(y, 2) - 4 * x * z;

if (discriminante < 0 ) {

	cout << " Las raices son complejas." << endl;

}else if(discriminante>0){

	cout << " Las raíces son reales. " << endl;
	
		x1 = (-y + sqrt(pow(y,2) - 4*x*z)) / (2*x);
		x2 = (-y - sqrt(pow(y,2) - 4*x*z)) / (2*x);
		
		cout << " Las raíces son: " << endl;
		
		cout << x1 << endl;
		cout << x2 << endl;

}else{

	cout<<"La raíces son reales e iguales: "<<endl;
		
		x3 = (-y + sqrt(pow(y,2) - 4*x*z)) / (2*x);
		x4 = (-y - sqrt(pow(y,2) - 4*x*z)) / (2*x);
	  
	    cout << "Las raíces son: " <<endl;
	    cout << x3 << endl;
	    cout << x4 << endl;
		
		}
}

int main(){
int a, b, c;

SetConsoleOutputCP(CP_UTF8);

cout << "-----------------------------------------------------------------------------------------"<<endl;

cout << " \n --- BIENVENIDO AL PROGRAMA QUE CAlCULA LAS RAÍCES DE UNA ECUACIÓN CUADRÁTICA --- " << endl;

cout << "-----------------------------------------------------------------------------------------"<<endl;

cout << "Introduzca el coeficiente cuadrático: " << endl;
cin >> a;

cout << "Introduzca el coeficiente lineal: " << endl;
cin >> b;

cout << "Introduzca la variable independiente: " << endl;
cin >> c;

calcularRaices(a,b,c);

	return 0;

}
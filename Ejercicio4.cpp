/*Ejercicio 4: Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;
int main(){
double a,b,c,discriminante,x1,x2,x3,x4;
	SetConsoleOutputCP(CP_UTF8);
	
	cout<<"\n ---BIENVENIDO AL PROGRAMA QUE CALCULA LAS RAÍCES DE UNA ECUACIÓN CUADRÁTICA ---" << endl;
	
	cout << "¿Cuál es el coeficiente cuadrático?" << endl;
	cin >>a;
	
	cout << "¿Cuál es el coeficiente lineal?" << endl;
	cin >> b;
	
	cout << "¿Cuál es el término independiente?" << endl;
	cin >> c;
	
	discriminante = pow(b, 2) - 4*a*c;
	
	if (discriminante<0) {
		
		cout << "Las raíces son complejas: " << endl;

	}else if(discriminante >0 ){
	
		cout << "Las raíces son reales " << endl;
	
		x1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
		x2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
	  
	    cout << "Las raíces son: " << endl;
		
		cout << x1 << endl;
		cout << x2 << endl;

	}else{
		cout<<"La ecuación tiene dos raíces reales e iguales: "<<endl;
		
		x3 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
		x4 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
	  
	    cout << "Las raíces son: " <<endl;
	    cout << x3 << endl;
	    cout << x4 << endl;
		
	}
	return 0;
}

/*Ejercicio 3: Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo
utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función
sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el
resultado de la hipotenusa calculada.*/

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;
int main(){
	double a,b,c;

	SetConsoleOutputCP(CP_UTF8);
	
	cout<<"\n--- BIENVENIDO AL PROGRAMA QUE CALCULA LA HIPOTENUSA DE UN TRIÁNGULO RECTÁNGULO ---"<<endl;
	
	cout<<"¿Cuál es la medida del cateto opuesto?"<<endl;
	cin>>a;
	
	cout<<"¿Cuál es la medida del cateto adyacente?"<<endl;
	cin>>b;
	
	 c = sqrt( pow(a,2) + pow(b,2));
	
	cout<<"La hipotenusa del triángulo es: "<<c<<endl;
	
	return 0;
}
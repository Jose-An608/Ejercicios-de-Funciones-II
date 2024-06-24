/*1. Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
resultado del área calculada.*/

#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main(){
	double radio;
	
	SetConsoleOutputCP(CP_UTF8);

    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    double area = M_PI * pow(radio, 2);

    cout << "El área del círculo con radio " << radio << " es: " << area << endl;

    return 0;
}
/*Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números
aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario
la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función
rand de la librería cstdlib para generar los números aleatorios.*/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;
int main(){
	srand(time(0));
	int n,m,n_al;
	
	SetConsoleOutputCP(CP_UTF8);

	cout<<"\n--- BIENVENIDO AL PROGRAMA QUE GENERA NÚMEROS ALEATORIOS ---"<<endl;

	cout<<"¿Cuántos números aleatorios quieres generar?"<<endl;
	cin>>n;
	
	cout<<"¿Hasta qué valor quieres que se den los números aleatorios?"<<endl;
	cin>>m;
	
	cout<<"Los números aleatorios son: "<<endl;
	
	for(int i=0 ; i<n ; i++){
	
		n_al=rand() % m;
			
			cout<<n_al<<endl;

	}
	cout<<endl;
	
	
	
	return 0;
}
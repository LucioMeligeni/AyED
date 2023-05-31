#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double numerador=4, denominador=1, pi=0,iteraciones=0,aux=0,precision=0;
	int alternador=1;
	
	//Con 1 millon da el mismo del ejercicio
	cout<<"Ingrese la cantidad de decimales con los cuales desea obtener presicion\n";
	cin>>precision;
	
	iteraciones=pow(10,precision);
	
	for(aux;aux<iteraciones;aux++){
		pi=pi + alternador*(numerador/denominador);
		denominador=denominador+2;
		alternador=alternador*(-1);
	}
	
	cout.precision(7);
	cout<<"El valor de pi es \n"<<pi;
	return 0;
}

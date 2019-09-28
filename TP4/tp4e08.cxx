#include <iostream>
using namespace std;
int main()
{
	
int array[7] = {};
int mayores =-99,menores=99, porcentaje =0;
float bajocero = 0;
	cout << "Ingrese temperatura del dia Lunes:";
	cin >> array[0];
	cout << "Ingrese temperatura del dia Martes:";
	cin >> array[1];
	cout << "Ingrese temperatura del dia Miercoles:";
	cin >> array[2];
	cout << "Ingrese temperatura del dia Jueves:";
	cin >> array[3];
	cout << "Ingrese temperatura del dia Viernes:";
	cin >> array[4];
	cout << "Ingrese temperatura del dia Sabado:";
	cin >> array[5];
	cout << "Ingrese temperatura del dia Domingo:";
	cin >> array[6];

for (int x=0;x<=7;x++){
	if (array[x]<0){
		bajocero++;
	}
	
	if (array[x]>mayores){
	 mayores = array[x];
	}
    if (array[x]<menores){
		menores = array[x];
	}
}

porcentaje = bajocero *100 / 7;

cout << "La temperatura maxima fue de " << mayores  << ", la minima de "<< menores << ". \nEl porcentaje de temperatura bajo cero es de  " << porcentaje << "%.";
}
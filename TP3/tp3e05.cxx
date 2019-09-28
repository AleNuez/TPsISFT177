#include <iostream>
using namespace std;
int main()
{
int array[25] = {};
int pares =0, mayores =0;
int porcentaje;
for (int j = 0;j<25;j++){
 	if (j == 0){
	cout << "Ingrese un numero:";
	cin >> array[j];} else {
	cout << "Ingrese otro numero:";
	cin >> array[j];}
}

for (int x=0;x<25;x++){
		if (array[x] %2 == 0){
		pares = pares + 1;	} 
	if (array[x] > 0) {
	    mayores = mayores + 1;	}	
}

porcentaje = mayores * 100/25;
cout << "La lista posee " << pares << " numeros pares y el porcentaje de numeros  positivos es del " << porcentaje << "%.";
}
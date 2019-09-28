#include <iostream>
using namespace std;
int main()
{
int array[5] = {};
int promedio =0, pares =0,negativos =0, promediob=0;
float porcentaje =0;
	cout << "Ingrese un numero:";
	cin >> array[0];
	cout << "Ingrese otro numero:";
	cin >> array[1];
	cout << "Ingrese otro numero:";
	cin >> array[2];
	cout << "Ingrese otro:";
	cin >> array[3];
	cout << "Ingrese otro numero:";
	cin >> array[4];

for (int x=0;x<=4;x++){
	
	if (array[x]>0 && array[x]%2==0){
		promediob = array[x];
		promedio = promedio + promediob;
	    pares = pares + 1;
	}else if (array[x]<0){
		negativos = negativos + 1;
       	}
}
promedio = promedio / pares;
porcentaje = negativos * 100 / 5;

cout << "La lista posee " << pares  << " numero pares y su promedio es " << promedio << "." << endl << "La lista posee también " << negativos << " numeros negativos y su porcentaje es del " << porcentaje << "%.";
}
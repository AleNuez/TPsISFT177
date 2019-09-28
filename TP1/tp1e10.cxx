#include <iostream>
using namespace std;
int main()
{
int array[8] = {};
int entre =0;
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
	cout << "Ingrese otro:";
	cin >> array[5];
	cout << "Ingrese otro numero:";
	cin >> array[6];
	cout << "Ingrese uno más:";
	cin >> array[7];

for (int x=0;x<=7;x++){
	
	if (array[x]>99 && array[x]<=500){
		entre = entre + 1;
	}
}
cout << "La lista posee " << entre << " numeros entre 100 y 500.";
}
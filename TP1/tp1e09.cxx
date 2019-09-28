#include <iostream>
using namespace std;
int main()
{
int array[10] = {};
int mayores =0;
	cout << "Ingrese una edad:";
	cin >> array[0];
	cout << "Ingrese otra edad:";
	cin >> array[1];
	cout << "Ingrese otra edad:";
	cin >> array[2];
	cout << "Ingrese otra edad:";
	cin >> array[3];
	cout << "Ingrese otra edad:";
	cin >> array[4];
	cout << "Ingrese otra edad:";
	cin >> array[5];
	cout << "Ingrese otra edad:";
	cin >> array[6];
	cout << "Ingrese otra edad:";
	cin >> array[7];
	cout << "Ingrese otra edad:";
	cin >> array[8];
	cout << "Ingrese otra edad:";
	cin >> array[9];
for (int x=0;x<=9;x++){
	
	if (array[x]>18){
		mayores = mayores + 1;
	}
}
cout << "La lista posee " << mayores << " mayores de edad.";
}
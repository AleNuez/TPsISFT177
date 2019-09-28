#include <iostream>
using namespace std;
void tp6e04();
int main()
{
	tp6e04();
}
void tp6e04 ()
{
	 cout << "Consigna: \n Cargar un vector de enteros de 12 elementos, ingresar un \n numero a buscar en el arreglo , si el mismo existe, informar\n en que posicion del vector se encuentra. si no, informar \n *No se encuentra en el vector*.\n\n";
	int vector[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int num;
	bool ok = false;
	cout << "Ingrese numero a buscar: " << endl;
	cin >> num;
	for (int i = 0;i<12;i++)
	{
		if (num == vector[i])
		{
			cout << "Se encontró " << num << " en posición " << i << " del vector." << endl ;
			ok = true;		
		} 
	}
	if (ok == false) cout << "No se encontaron coincidencias.";
}
	
	
#include <iostream>
using namespace std;
int main()
{
double x,y,pot=1;
cout << "Ingrese un numero: \n";
cin >> x;
cout << "Ingrese su exponente: \n";
cin >> y;

	
	for (int z = 0; z<y;z++)
	{ 
	pot = pot * x;
	}
	cout << "La potencia de su numero es " << pot;
}
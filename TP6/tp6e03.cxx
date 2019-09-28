#include <iostream>
using namespace std;
void tp6e03();
int main()
{
	tp6e03();
}
void tp6e03 ()
{
	 cout << "Consigna: \nDeclarar un vector de 30 elementos y cargarle los numeros\n pares que se encuentran entre 10 y 68 inclusive. Informarlo.\n\n";
	int vector[30],par=10;
	
	for (int i = 0;i<30;i++)
	{
		vector[i] = par;
		par = par + 2 ;
		cout << vector[i] << " ";
	}
	
}
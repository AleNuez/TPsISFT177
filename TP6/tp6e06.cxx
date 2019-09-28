#include <iostream>
using namespace std;
void tp6e06();
int main()
{
	tp6e06();
}
void tp6e06 ()
{
	    cout << "Consigna: \n Ingresar desde el teclado numeros a un vector de enteros de 20 elementos e informar los mismos ordenados de mayor a menor.\n\n";
	int vector[20],aux;
	for (int i = 0;i<20;i++)
	{
		cin >> vector[i];
	}
	for (int x=19; x>0;x--)
	{
		for (int y=0;y<x;y++)
		{
			if (vector[y]<vector[y+1])
			{
				aux = vector[y+1];
				vector[y+1] = vector[y];
				vector[y] = aux;
			}
		}
	}
	for (int i = 0; i<20;i++)
	{
		cout << vector[i] << endl;
	}
	
}
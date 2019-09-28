#include <iostream>
using namespace std;
void tp6e01();

int main()
{
	tp6e01();
}

void tp6e01()
{
	int vector1[15];
		cout <<"Consigna: Escribir un programa que permita a un usuario cargar \ndatos a un vector de 15 elementos e informarlos separados por un \nespacio.\n";
	cout << "\nIngrese 15 numeros reales: \n";
	for (int i = 0; i < 15;i++) // cargar datos
	{
	cin >> vector1[i];
	}
	cout << "Estos son los 15 numeros ingresados: \n";
	for (int i= 0; i< 15;i++) // mostrar datos
	{
	cout << vector1[i] << "  ";
	}
	cout << "\n\n";
}
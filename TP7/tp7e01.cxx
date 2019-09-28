#include <iostream>
using namespace std;
void tp7e01();
int main()
{
	tp7e01();
}
void tp7e01()
{
	cout << "Consigna: Escribir un programa que permita al usuario cargar datos a una matriz de enteros cuadrada de 3x3 e informarla indicando filas y columnas\n";
	int mat[3][3];
	for(int fila = 0;fila<3;fila++)
	{
		for (int columna=0;columna<3;columna++)
		{
			cin >> mat[fila][columna];
		}
	}
	cout << endl;
		for(int fila = 0;fila<3;fila++)
	{
		
		cout << endl;
		for (int columna=0;columna<3;columna++)
		{
			cout << "\t" << mat[fila][columna] << "\t";
		}
		cout << endl;
	}

	
}
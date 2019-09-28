#include <iostream>
using namespace std;
void tp7e06();
int main()
{
	tp7e06();
}
void tp7e06()
{
	cout << "Consigna: ingresar datos a una matriz de enteros de 5x5 , generar un vector suma de 5 elementos con la sumatoria de cada una de las filas de la matriz, informar.\n";
	
	int mat[3][3];
	for(int fila = 0;fila<3;fila++)
	{
		for (int columna=0;columna<3;columna++)
		{
			cin >> mat[fila][columna];
		}
	}

	
}
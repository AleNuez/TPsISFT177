#include <iostream>
using namespace std;
void tp7e04();
int main()
{
	tp7e04();
}
void tp7e04()
{
	cout << "Consigna: Cargar la columna central de una matriz de 5x3 y generar la carga automatica de las columnas restantes con: en la primera columna los pares mayores a los n cargados en la central y en la segunda los impares menores\n";
	
	int mat[3][3];
	for(int fila = 0;fila<3;fila++)
	{
		for (int columna=0;columna<3;columna++)
		{
			cin >> mat[fila][columna];
		}
	}

	
}
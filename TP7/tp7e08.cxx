#include <iostream>
using namespace std;
void tp7e08();
int main()
{
	tp7e08();
}
void tp7e08();
{
	cout << "Consigna: Cargar con numeros enteros dos matrices A y B de 3x3 cada una. Ingresar luego un numero correspondiente a una de las columnas de A (validar ingreso) , realizar ls transposicion de la columna indicada de A a B. Informar ambas matrices.\n";
	
	int mat[3][3];
	for(int fila = 0;fila<3;fila++)
	{
		for (int columna=0;columna<3;columna++)
		{
			cin >> mat[fila][columna];
		}
	}

	
}
#include <iostream>
using namespace std;
void tp7e05();
int main()
{
	tp7e05();
}
void tp7e05()
{
	cout << "Consigna: Cargar con caracteres una matriz del tipo char de 4x4 e informarla cual fue cargada respetando fila y columna , luego ordenar alfabeticamente las filas pares, las impares de la misma manera pero al reves.\n";
	
	int mat[3][3];
	for(int fila = 0;fila<3;fila++)
	{
		for (int columna=0;columna<3;columna++)
		{
			cin >> mat[fila][columna];
		}
	}

	
}
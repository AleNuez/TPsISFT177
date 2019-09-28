#include <iostream>
using namespace std;
void tp7e02();
int main()
{
	tp7e02();
}
void tp7e02()
{
	cout << "Consigna: cargar un vector de reales de 2x4 e informar el mayor , el menor y su posicion.\n"
	
	int mat[3][3];
	for(int fila = 0;fila<3;fila++)
	{
		for (int columna=0;columna<3;columna++)
		{
			cin >> mat[fila][columna];
		}
	}

	
}
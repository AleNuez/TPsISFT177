#include <iostream>
using namespace std;
void tp7e03();
int main()
{
	tp7e03();
}
void tp7e03()
{
	cout << "Consigna: cargar una matriz de 5x5 e informar \ , |__ , /  . \n"
	
	int mat[3][3];
	for(int fila = 0;fila<3;fila++)
	{
		for (int columna=0;columna<3;columna++)
		{
			cin >> mat[fila][columna];
		}
	}

	
}
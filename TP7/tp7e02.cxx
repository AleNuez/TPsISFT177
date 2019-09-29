#include <iostream>
using namespace std;
void tp7e02();
int main()
{
	tp7e02();
}
void tp7e02()
{
	cout << "Consigna: cargar un vector de reales de 2x4 e informar el mayor , el menor y su posicion.\n";

	float mat[2][4];
	float mayor = -999, menor = 999, filaMay = 0, filaMen = 0, colMay = 0, colMen = 0;
	for(int fila = 0;fila<2;fila++)
	{
		for (int columna=0;columna<4;columna++)
		{
			cin >> mat[fila][columna];
			if ( mat[fila][columna] > mayor)
			{
				mayor = mat[fila][columna];
				filaMay = fila;
				colMay = columna;
			}
			if (mat[fila][columna] < menor)
			{
				menor = mat[fila][columna];
				filaMen = fila;
				colMen = columna;

			}
		}
	}
	for(int fila = 0;fila<2;fila++)
	{
		cout << endl;
		for (int columna=0;columna<4;columna++)
		{
			cout << mat[fila][columna] << " ";
		}
	}
	cout << endl << "El mayor es " << mayor << " ubicado en la fila " << filaMay+1 << " y en la columna " << colMay+1 << " \n.";
	cout << endl << "El menor es " << menor << " ubicado en la fila " << filaMen+1 << " y en la columna " << colMen+1 << " \n.";


}

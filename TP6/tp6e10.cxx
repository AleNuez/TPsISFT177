#include <ctype.h>
#include <iostream>
using namespace std;
void tp6e10();
int main()
{
	tp6e10();
}
void tp6e10()
{
	         cout << "Consigna: \nSe carga un vector con letras minusculas, luego se pide el ingreso de otra letra, si la misma se encuentra en el vector, convertirla a mayuscula e informar el vector completo .\n Nota: la funcion toUpper(x) devuelve x en mayuscula, se encuentra en la libreria ctype.h \n\n";
	         char vector[3] = {'h','o','l'};
	         char otra;
	         cin >> otra;
	         for (int i = 0;i<3;i++)
	         {
	         	if(otra == vector[i])
	         	{
	         		for (int x =0;x<3;x++)
	         		{
	         			vector[x] = toupper(vector[x]);
	         		}
	         	}
	         	cout << vector[i] << " ";
	        
	         }
	         

}
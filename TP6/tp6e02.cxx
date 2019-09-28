#include <iostream>
using namespace std;

void tp6e02 ();
int main()
{
	tp6e02();
}

void tp6e02()
{
	int vector2[10];
	int mayor2=-999,menor2=999,posMay2=0,posMen2=0;
float sum2 = 0, prom2=0, cont2=0,sumimPar2=0; 
	   cout << "Consigna: \nCargar numeros a un vector de enteros de 10 elementos e informar:\na.Promedio de los numeros positivos ingresados\nb.Sumatoria de los que se encuentran en las posiciones impares del vector\nc.El numero mayor, el menor y la posicion donde se encuentran.\n\n";

	cout << "Ingrese 10 numeros enteros: \n";
	for (int i = 0; i < 10;i++) // cargar datos
	{
		cin >> vector2[i];
		if (vector2[i] > mayor2)
		{
			mayor2 = vector2[i];
			posMay2 = i;
		}
		if (vector2[i] < menor2)
		{
			menor2 = vector2[i];
			posMen2 = i;
		}
		
		if (vector2[i] > 0)
		{
			sum2 = sum2 + vector2[i];
			cont2=cont2+1;
		}
	}
	for (int i =1;i<10;i=i+2)
		{
			sumimPar2 = sumimPar2 + vector2[i];
		}
	
	prom2 = sum2 / cont2;
	
	cout << "\n\na. El promedio de numeros positivos es de " << prom2 << endl;
	cout <<"b. La sumatoria de los numeros en posiciones impares del vector es de: "<< sumimPar2 << endl;
	cout << "c.  Mayor: " << mayor2 << " en posicion "<<posMay2<<  " del vector.\n\tMenor: "<< menor2 << " en posicion " << posMen2 << " del vector.";
}

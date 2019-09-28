#include <iostream>
using namespace std;
void tp6e05();
int main()
{
	tp6e05();
}
void tp6e05 ()
{
	    cout << "Consigna: \n Cargar desde el teclado dos vectores de enteros A y B de 5 elementos cada uno , generar un vector C, tambien de 5 elementos, donde cada posicion del mismo tendra almacenada la sumatoria de las mismas posiciones de los vectores A y B cargados al principio. Cargar otro vector D, donde cada posicion tendra almacenado el producto del primer elemento del vector A con el ultimo del vector B  y asi sucesivamente hasta completar D.\n\n";
	int a[5]={1,2,3,4,5},b[5]={1,2,3,4,5},c[5],d[5];
	int aux = 4;
	cout << "A\tB\tC\tD\n";
	for (int i = 0;i<5;i++)
	{
		c[i] = a[i]+b[i];
		d[i] = a[i]*b[aux];
		aux--;
	}
	for (int i = 0 ; i<5; i++)
	{
	cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\t" << d[i] << endl;
	}
}
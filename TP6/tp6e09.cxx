#include <iostream>
using namespace std;
void tp6e09();
int main()
{
	tp6e09();
}
void tp6e09()
{
	      cout << "Consigna: \nSe ingresan numeros a un vector de reales de 5 elementos, informar la parte entera de los numeros ingresados.\n\n";
	      float vector[5];
	      int vectorE[5];
	      for (int i=0;i<5;i++)
	      {
	      	cin >> vector[i];
	      	vectorE[i] = vector[i];
	      	cout << "Parte entera: " << vectorE[i] << endl;
	      }
	      
}
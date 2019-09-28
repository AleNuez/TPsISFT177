#include <iostream>
using namespace std;
void tp6e08();
int main()
{
	tp6e08();
}
void tp6e08()
{
	   cout << "Consigna: \nCargar un vector tipo char de 12 elementos  e indicar cuantas vocales y consonantes contiene el mismo, informar.\n\n";
	char vector[12];
	for (int i=0;i<12;i++) 
	{
	cin >>vector[i];
	if (vector[i] == 97 || vector[i] == 101 || vector[i] == 105 || vector[i] == 111 || vector[i] == 117 )
	{
		cout << " vocal\n";
	} else if (vector[i] > 97 || vector[i] < 122)
	{
		cout << " consonante\n";
	}
	}
}
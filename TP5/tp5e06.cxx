#include <iostream>
using namespace std;
int main()
{
	float horas, sueldo;
	char tipo;
	cout << "Ingrese horas trabajadas: \n";
	cin >> horas;
	while (horas < 1 || horas > 60)
	{
		cout << "Horas no validas, intentelo de nuevo\n";
		cin >> horas;
	}
	cout << "Ingrese tipo de Empleado: (a,b,c) \n";
	cin >> tipo;
	switch (tipo)
	{
		case 'a':
		sueldo = horas * 25; break;
		case 'b': 
		sueldo = horas * 18; break;
		case 'c':
		sueldo = horas * 15.5; break;
	}
	cout << "Su sueldo respecto a lo trabajado es: $" << sueldo;
	
}
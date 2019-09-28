/* Sabiendo que en la fabrica trabajan 10 empleados informar:
1.Sueldo mensual de cada empleado
2.Mayor sueldo por categoria
3.Empleado que mas gana y su categoría
4.Cantidad de empleados por categoria
5.Promedio general de sueldos
6.Porcentaje de operarios calificados
*/ 
#include <iostream>
using namespace std;
int main()
{
	float horas, sueldo;
	float maxA = 0, maxB = 0, maxC = 0;
	char tipo;
	float sueldoMen[10];
	for (int loop=1;loop<=10;loop++)
	{
	cout << "Empleado " << loop <<", ingrese horas mensuales trabajadas: \n";
	cin >> horas;
	while (horas < 1 || horas > 240)
	{
		cout << "Horas no validas, intentelo de nuevo\n";
		cin >> horas;
	}
	cout << "Ingrese tipo de Empleado: (a,b,c) \n";
	cin >> tipo;
	switch (tipo)
  	{
		case 'a':
		sueldo = horas * 25;
		sueldoMen[loop] = sueldo; 
		if (sueldoMen[loop] > maxA)
		{
			maxA = sueldoMen[loop];
		}
		break;	
		case 'b': 
		sueldo = horas * 18; 
		sueldoMen[loop] = sueldo; 
		if (sueldoMen[loop] > maxB)
		{
			maxB = sueldoMen[loop];
		}
		break;
		case 'c':
		sueldo = horas * 15.5;
		sueldoMen[loop] = sueldo;
		if (sueldoMen[loop] > maxB)
		{
			maxB = sueldoMen[loop];
		}
		  break;
  	}
	}
	for (int res = 1;res<=10;res++)
	{
	cout << "El sueldo del empleado " << res << " respecto a lo trabajado es: $" << sueldoMen[res] << endl;
	}
	
}
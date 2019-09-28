#include <iostream>
using namespace std;
int main()
{

	bool programa = true;
	int combustible = 0;
	int distancia = 0;
	int opcion;
	do
	{		
		system("cls");
		cout << "CALCULADORA DE COMBUSTIBLE\n";
		cout << "\n1.Calcular  distancia\n2.Calcular combustible\n3.Salir\n";
		cin >> opcion;
		switch (opcion)
		{
			case 1:
			cout << "Ingrese combustible disponible:\n";
			cin >> combustible;
			distancia = combustible * 100 / 8;
			cout << "La distancia que recorrera con " << combustible << " litros de combustible sera de " << distancia << " kms.\n"; 
			system("pause");
				break;
			case 2:
			cout << "Ingrese distancia a recorrer:\n";
			cin >> distancia;
			combustible =  distancia * 8 / 100;
			cout << "El combustible que necesita para recorrer " << distancia << " sera de " << combustible << " lts.\n"; 
			system("pause");
				break;
			case 3:
				cout << "Saliendo del programa...";
				programa = false;
				break;
		}
	
	} while ( programa == true);
}
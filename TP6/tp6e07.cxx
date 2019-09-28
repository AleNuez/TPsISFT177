#include <iostream>
using namespace std;
void tp6e07();
int main()
{
	tp6e07();
}
void tp6e07()
{
	   cout << "Consigna:\n Se realiza una encuesta a 10 personas de las cuales se ingresa un numero de 3 cifras identificatorio (validar el ingreso) y la edad de la misma, se pide informar:\na. Las personas mayores a 30 años con su numero identificatorio.\nb.Todas las personas ordenadas por edad de menor a mayor\nc. Todas las personas ordenadas por su numero identificatorio de mayor a menor. \n\n";
	 	int id[10],edad[10],auxId,auxEd;
	     for (int i =0;i<10;i++)
	   {
	   	cout << "\nId: ";
	   	
	   	cin >> id[i];
	   	if (id[i]<99 || id[i]>999)
	   	{
	   		cout << "\nIngreso invalido";
	   		cin >> id[i];
	   	}
	   	cout << "\nEdad: ";
	   	cin >> edad[i];
	   	
	   }
	   cout << "\nA. Mayores a 30: \n";
	   for (int i=0;i<10;i++)
	   {
		   if (edad[i]>30)
		   {
	   		cout << "\nId: " << id[i];
	   		cout << "\nEdad: "<< edad[i];
	   		cout << endl;
		   }
	   }
	   for (int x=9;x>=0;x--)
	   {
	   	for (int y=0;y<x;y++)
	   	{
	   		if (edad[y] > edad[y+1])
	   		{
	   			auxEd = edad[y];
	   			edad[y] = edad[y+1];
	   			edad[y+1] = auxEd;
	   			auxId = id[y];
	   			id[y] = id[y+1];
	   			id[y+1] = auxId;
	   		}
	   	}
	   }
	   cout <<"\nB. Orden por edad -a+:\n";
	      for (int i=0;i<10;i++)
	   {
			   
	   		cout << "\nId: " << id[i];
	   		cout << "\nEdad: "<< edad[i];
	   		cout << endl;
	   }
	   for (int x=9;x>=0;x--)
	   {
	   	for (int y=0;y<x;y++)
	   	{
	   		if (id[y] < id[y+1])
	   		{
	   			auxEd = edad[y];
	   			edad[y] = edad[y+1];
	   			edad[y+1] = auxEd;
	   			auxId = id[y];
	   			id[y] = id[y+1];
	   			id[y+1] = auxId;
	   		}
	   	}
	   }
	   cout <<"\nB. Orden por Id +a-:\n";
	      for (int i=0;i<10;i++)
	   {
			   
	   		cout << "\nId: " << id[i];
	   		cout << "\nEdad: "<< edad[i];
	   		cout << endl;
	   }
	
}
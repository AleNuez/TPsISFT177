#include <iostream>
using namespace std;
int main()
{
	bool on = true;
	int opcion = 1;
	do 
	{
	int num, dm=0,um=0,c =0,d=0,u=0,result=0;
	cout << "Ingrese  Numero del 1 al 10000: \n";
	cin >> num;
	
	dm = num / 10000;
	um = dm*10000;
	um = num - um;
	um = um / 1000;
	c =  num - dm*10000 - um * 1000;
	c = c /100;
	d = num -  dm*10000 - um*1000 - c*100;
	d = d/10;
	u = num - dm*10000 - um*1000 - c*100 - d*10;
	

	cout << "\nDecenas de mil: "<< dm << 				  "\nUnidades de mil:"<< um << "\nCentenas:" << c<<   	"\nDecenas:" << d << "\nUnidades:" << u << "\n";
	result = dm + um + c + d + u;
	cout << "La suma de las cifras es: " << result << "\n";
	cin >> opcion;
	system("cls");
	if (opcion == 0)
	{
		on = false;
	}
  	} while (on == true);
}
	
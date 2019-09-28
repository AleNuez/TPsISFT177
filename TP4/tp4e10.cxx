#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
cout << "********************************************";
gotoxy(1,19);
cout << "********************************************";
gotoxy(11,7);
cout <<"TRABAJO PRACTICO N4";
gotoxy(11,8);
cout << "___________________";
gotoxy(13,9);
cout <<"Ejercicio N10";
getch();
system("cls");

	int legajo;
	float nota,parcial = 0,contnota = 0;
	float prom = 0, promgeneral=0;
	int a = 0;
	float mayor = -999, menor = 999;
	int pos=100;{

for (legajo = 100;legajo<=104;legajo++)
{
			nota = 0, parcial = 0, prom = 0;
			cout << "Ingrese nota del alumno N"<< legajo<<": \n";
	for (int n=1;n<=3;n++)
	{
		cout<<"Nota "<<n<<": ";
	cin >> nota;
	while (nota < 1 || nota > 10)
		 {
	 	cout <<"* Nota invalida, intentelo nuevamente.\n";
	 	cout<<"Nota "<<n<<": ";
	 	cin >> nota;
	 	}
	 parcial = parcial + nota;
	 contnota = contnota + 1;
	 if (n == 3)
	 	{
	 		
	 		prom = parcial / 3;
	 		if (prom>mayor){
			 mayor = prom;
			 if (legajo!=100){
			 pos= pos +1;}
			}
			 		
	 	}
	
	}
	promgeneral = promgeneral + prom;

} 
	promgeneral = promgeneral /5;
	cout << "El promedio general es de " << promgeneral<<".\n";
	cout << "El mayor promedio es de " << mayor<<" del alumno de legajo "<< pos<<".\n"; 
	
}
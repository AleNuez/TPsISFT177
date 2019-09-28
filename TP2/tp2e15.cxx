#include <iostream>
using namespace std;
int main()
{
int array[25] = {233,53,394,997,235,555,124,803,230,333,268,222,532,402,444,737,22,1,28,245,883,33,665,231,200};
int promedio =0, entre =0;
float porcentaje =0;

for (int x=0;x<=25;x++){
promedio = promedio + array[x];
	if (array[x]>=200 && array[x]<=400){
		entre = entre + 1;
	}
}

promedio = promedio / 25;

porcentaje =  entre * 100 / 25;

cout << "El  promedio general es " << promedio << "." << endl << "El porcentaje de los numeros entre 200 y 400 es del " << porcentaje << "%.";
}
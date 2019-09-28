#include <iostream>
using namespace std;
int main(){
float prom =0,menor=0,mayor=0;
float sum =0, num =1,nums=0;
int max = -99999 ,min = 10000;
while (num != 0)
{
cout << "Ingrese un numero: \n";
cin >> num;
if (num == 0) {break;}
sum = sum + num;
nums = nums + 1;
	if (max < num)
	{
		max = num;
	}
	if (min > num)
	{
		min = num;
	}

}
prom = sum /nums;
cout << "****	******	****	*****\n";
cout << "La cantidad de numeros ingresados es: " << nums << "\n";
cout << "El numero menor es " << min << ", y el mayor es "<< max << " \n";
cout << "El promedio de los numeros ingresados es: "<< prom;
}
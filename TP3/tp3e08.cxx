#include <iostream>
using namespace std;
int main(){
float prom =0;
float sum =0, num =1,nums=0;
while (num != 0)
{
cout << "Ingrese un numero: \n";
cin >> num;
sum = sum + num;
nums = nums + 1;

}
prom = sum /nums;
cout << "****	******	****	*****\n";
cout << "El promedio de los numeros ingresados es: "<< prom;
}
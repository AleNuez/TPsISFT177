//Primos entre 1 y 250
#include <iostream>
using namespace std;
int main(){
//int num = 27;
int vecesDivisible = 0;

for (int num = 2;num <=250;num++)
{
vecesDivisible = 0;
for (int i=2;i<=num;i++)
{
	if (num%i == 0)
	{
		vecesDivisible = vecesDivisible + 1;
	}
	if (i==num && vecesDivisible == 1)
	{
		cout << num <<"  - Primo \n";
	}else if (i == num && vecesDivisible >1)
	{//cout << num << " - No es primo \n";
	}
}

}
}
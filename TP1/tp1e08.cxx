#include <iostream>
using namespace std;
int main()
{
int array[5] = {-4,-50,3,66,-70};
int positivos =0, negativos =0;

for (int x=0;x<=4;x++){
	
	if (array[x]>0){
		positivos = positivos+ 1;
	} else { negativos = negativos + 1;
	}
}
cout << "La lista posee " << positivos << " numeros positivos y " << negativos << " numeros negativos";
}
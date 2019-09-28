#include <iostream>
using namespace std;

int main(){
double n1, factorial =0, result =1;

cout << "ingrese un numero"<< endl;
cin >> n1;

for (int x = 1; x <= n1; x++){
	result = result * x ;
	
	}

cout << "El factorial de " << n1 << " es " << result;
   
}

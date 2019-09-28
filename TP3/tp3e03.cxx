#include <iostream>
using namespace std;

int main(){
int n1,n2;
cout << "Ingrese un numero"<< endl;
cin >> n1;
cout << "Ingrese otro numero"<<endl;
cin >> n2;
if (n1 > n2 && n1 != n2){
	cout << n1 << " es mayor que " << n2; 
}else if (n1 < n2 && n2 != n1){
	cout << n1 << " es menor que " << n2;
}else{ cout << "Los numeros son iguales";}
}


#include <iostream>
using namespace std;
int main(){
int edad, result;
cout << "Ingrese edad del socio:"<<endl;
cin >> edad;
result = 2019 - edad;
cout << "El socio nació en " << result<< " y es ";
if (edad < 16){cout << "cadete.";}
else if (edad >= 16 && edad <=18){
	cout << "juvenil.";}
	else { cout << "mayor. ";}
} 

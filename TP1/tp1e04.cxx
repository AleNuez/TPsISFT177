#include <iostream>
using namespace std;

int main(){
int base,altura,superficie= 0;
cout << "Ingrese base de su triangulo en cm"<< endl;
cin >> base;
cout << "Ingrese altura de su triangulo en cm " << endl;
cin >> altura;
superficie = base * altura / 2;
cout << "La superficie de su triangulo es " << superficie;
 return 0; 
}


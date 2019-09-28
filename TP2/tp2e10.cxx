#include <iostream>
using namespace std;

int main(){
float horas, sueldo = 0;
cout << "Ingrese la cantidad de horas a calcular"<< endl;
cin >> horas;
sueldo = horas * 12.75 ;
cout << "Por " << horas << " hs trabajadas debe recibir  $" << sueldo << endl;
 return 0;
}


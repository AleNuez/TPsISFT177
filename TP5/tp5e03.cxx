#include <iostream>
#include <math.h>
using namespace std;
int main(){
int ladoA,ladoB;
float hipotenusa;
cout << "PROGRAMA PARA DETERMINAR LA HIPOTENUSA\nDE UN TRIANGULO RECTANGULO A PARTIR DEL\nCONOCIMIENTO DE SUS LADOS\n";
cout << "Ingrese largo de un lado:\n";
cin >> ladoA;	
cout << "Ingrese largo del otro lado:\n";
cin >> ladoB;
hipotenusa = ladoA*ladoA + ladoB*ladoB;
hipotenusa = sqrt(hipotenusa);
cout << "La hipotenusa es: " << hipotenusa;
}
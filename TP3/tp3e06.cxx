#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
char opcion;
int cat1,cat2,superficieb = 0;
int basea,alturaa,superficiea = 0;
int basec,alturac,superficiec=0;
cout << "Ingrese una opcion:\n";
cout <<".	A\n.	B\n.	C\n";
cin >> opcion;
system("cls");
switch (opcion) {
case 'a': //rectangulo

cout << "******CALCULAR SUPERFICIE DE UN RECTANGULO******\n";
cout << "Ingrese base:" << endl;
cin >> basea;
cout << "Ingrese altura:" << endl;
cin >> alturaa;
superficiea = basea * alturaa;
cout << "La superficie de su rectangulo es de " << superficiea << ".";
break;
case 'b': //triangulo rectangulo

cout << "******CALCULAR SUPERFICIE DE UN TRIANGULO RECTANGULO******\n";
cout << "Ingrese largo del primer cateto que forma un angulo recto:" << endl;
cin >> cat1;
cout << "Ingrese largo del segundo cateto que forma un angulo recto:" << endl;
cin >> cat2;
superficieb = cat1* cat2;
superficieb = superficieb /2;
cout << "La superficie de su triangulo es de " << superficieb << ".";
break;
case 'c': //triangulo equilatero
cout << "******CALCULAR SUPERFICIE DE UN TRIANGULO EQUILATERO******\n";
cout << "Ingrese base:" << endl;
cin >> basec;
cout << "Ingrese altura:" << endl;
cin >> alturac;
superficiec = basec * alturac;
superficiec = superficiec /2;
cout << "La superficie de su triangulo es de " << superficiec << ".";
break;
}	
}
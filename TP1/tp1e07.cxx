#include <iostream>
using namespace std;
int main()
{
int numero,unidad,result =0;
float decena;
cout << "Ingrese numero del 1 a 99 " << endl ;
cin >> numero;
decena = numero / 10;
unidad = numero - decena * 10;
result = decena + unidad;
cout << "La suma de los digitos es " << result;
}
#include <iostream>
using namespace std;

int main(){
float litros, distancia = 0;
cout << "Ingrese la cantidad de litros que posee"<< endl;
cin >> litros;
distancia = litros * 100 / 13;
cout << "Con " << litros << " lts puede recorrer " << distancia << " kms"<< endl;
 return 0;
}


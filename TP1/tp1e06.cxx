#include <iostream>
using namespace std;

int main(){
int n1,n2,n3,n4,n5;
float  promedio = 0;
cout << "Ingrese primera nota"<< endl;
cin >> n1;
cout << "Ingrese segunda nota"<< endl;
cin >> n2;
cout << "Ingrese tercera nota"<< endl;
cin >> n3;
cout << "Ingrese cuarta nota"<< endl;
cin >> n4;
cout << "Ingrese quinta nota"<< endl;
cin >> n5;
promedio = (n1 + n2 +n3 + n4 + n5) /5;
cout << "Su promedio es de  " << promedio << endl;
 return 0;
}


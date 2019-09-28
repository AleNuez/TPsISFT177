#include <iostream>
using namespace std;
int main(){
int num,b16,b8,b4,b2,b1;
cout << "Ingrese un numero: \n";
cin >> num;
b16 = num %2;
b8 = (num/2)%2;
b4 = (num/2/2)%2;
b2 = (num/2/2/2)%2;
b1 = (num/2/2/2/2)%2;

cout << b1 << b2 << b4 << b8 << b16;
}
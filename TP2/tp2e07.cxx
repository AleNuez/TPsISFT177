#include <iostream>
using namespace std;
int main(){
char l;
cout << "ingrese letra" << endl;
cin >> l;
if (l == 'a' || l== 'e' || l== 'i' || l=='o' || l=='u'){
	cout << "Usted ingreso una vocal" << endl;
} else {
	cout << "Usted ingreso una consonante" << endl;
} return 0;
}
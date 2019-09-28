#include <iostream>
using namespace std;
int main(){
int num,par = 1, parant =1;
cout << "Ingrese un numero" << endl;
cin >> num;
for (int j=1 ; j <=2 ;j++){
	par = num + j;
	if (par % 2 == 0 ){
		break;
	}
}
for (int i=1 ; i <=2 ;i++){
	parant = num - i;
	if (parant % 2 == 0 ){
		break;
	}
}



cout << parant << "<<<< " << num << " >>>>"<< par;
}
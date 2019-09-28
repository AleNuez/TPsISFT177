#include <iostream>
using namespace std;
int main(){
	int arr[5], mayores =0;
	
	for (int x=0;x<=4;x++){
		if (x==0){
			cout <<"Ingrese un numero \n";
				} else {
				cout<< "Ingrese otro numero\n";
				}
		cin >> arr[x];
}
for (int i=0;i<=arr[i];i++){
	if (arr[i]>=150){
		mayores = arr[i] + mayores;
		
	}
	
}
cout << "La suma de los numeros mayores a 150 da: " << mayores;
 
}



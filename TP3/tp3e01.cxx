#include <iostream>
using namespace std;

int main(){
int array[5] ={};
int promedio= 0;
for (int x = 0;x <5;x++){
if (x == 0){
cout << "Ingrese un numero"<< endl;
cin >> array[x];} else{
cout << "Ingrese otro numero"<<endl;
cin >> array[x];}
}

promedio = array[0] + array[1] + array[2] + array[3] + array[4];
promedio = promedio / 5;
cout << "El promedio es " << promedio;
return 0;   
}


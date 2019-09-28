#include <iostream>
using namespace std;
int main ( ) {

int array[5],max,pos=0;

for (int i = 0; i < 5; i++) {
cout<<"Ingresa elemento : ";
cin>>array[i]; 
}
max = array[0];
pos = pos + 1;
for (int i = 0; i < 5; i++) {  
if (max < array[i])   {
    max = array[i];
    pos = i + 1;
   }
  }
cout<<"El valor maximo del arreglo es : "<<max<<"\nSu posicion en el arreglo es :  "<< pos <<endl;

}
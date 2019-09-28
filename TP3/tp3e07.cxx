#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
int promEdades =0, hombresCant = 0,mujeresCant = 0,promEdadMujer=0, promMasc =0,ninos =0;
int edades[10] = {};
char sexos[10] = {};

for (int x = 1;x<=10;x++){
cout << "Ingrese edad de persona " << x << ":\n";
cin >> edades[x-1];
if (edades[x-1] >= 5 && edades[x-1] <= 10){
ninos = ninos + 1;
}
promEdades = promEdades + edades[x-1];
cout << 	"Ingrese su sexo:\n";
cin >> sexos[x-1];
if (sexos[x-1] == 'm'){
 hombresCant = hombresCant + 1;	
}else if (sexos [x-1] == 'f'){
	mujeresCant = mujeresCant + 1;
	promEdadMujer = promEdadMujer + edades[x-1];
}
}
system("cls");
cout << "* Hombres: " << hombresCant << "\tMujeres: "<<mujeresCant<< endl;
promEdades = promEdades / 10;

cout << "* Promedio de edades : " << promEdades << endl;

promEdadMujer = promEdadMujer / mujeresCant;
cout << "* Promedio de edades femeninas: " << promEdadMujer << endl;

promMasc = hombresCant * 100 / 10;
cout << "* Porcentaje masculino: " << promMasc <<"%\n";

cout << "* Individuos entre 5 y 10 años: " << ninos;


}
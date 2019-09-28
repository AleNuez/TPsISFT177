#include <iostream>
#include <stdlib.h>
using namespace std;
// CREO LA CLASE
class Persona {
    public:
    int edad;
	char sexo;
	Persona(int,char );
	 void sayedad();
	 void saysexo();
	
}; // ESTO NO SE
Persona::Persona(int xedad, char xsexo){
edad = xedad; 
sexo =xsexo;
}
// 
void Persona::sayedad(){
	cout << edad;
}
void Persona::saysexo(){
	cout << sexo;
}
int main(){
	int mujeres = 0;
// CREO LOS OBJETOS
Persona p1 = Persona(24,'m');
Persona p3= Persona(50,'f');
Persona p4 = Persona(74,'m');
Persona p5 = Persona(6,'f');
Persona p2 = Persona(26,'f');
Persona p6 = Persona(23,'f');
Persona p7 = Persona(26,'m');
Persona p8 = Persona(18,'f');
Persona p9 = Persona(29,'m');
Persona p10= Persona(30,'f');
// LOS CONVIERTO EN VARIABLES
int e1= p1.edad;
char s1 =p1.sexo;
int e2= p2.edad;
char s2 =p2.sexo;
int e3= p3.edad;
char s3 =p3.sexo;
int e4= p4.edad;
char s4 =p4.sexo;
int e5= p5.edad;
char s5=p5.sexo;
int e6= p6.edad;
char s6 =p6.sexo;
int e7= p7.edad;
char s7=p7.sexo;
int e8= p8.edad;
char s8 =p8.sexo;
int e9= p9.edad;
char s9 =p9.sexo;
int e10= p10.edad;
char s10=p10.sexo;

// HAGO UN ARREGLO PARA MANIPULARLOS
int arr[10] = {e1,e2,e3,e4,e5,e6,e7,e8,e9,e10};
int err[10] =
{s1,s2,s3,s4,s5,s6,s7,s8,s9,s10};

for(int j=0;j<=10;j++){
if (arr[j]>=21 && err[j]=='f'){
	mujeres = mujeres + 1;
}
}

cout << "La lista posee " << mujeres << " Mujeres mayores de 21 años.";
			
	}


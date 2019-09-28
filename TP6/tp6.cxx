#include <iostream>
#define S3 "\t\t____________________________________\n\n"
using namespace std;
int main(){
bool programa = true;
// variables de los ejercicios
float vector1[15]; // e1
int vector2[10]; // e2
float sum2 = 0, prom2=0, cont2=0,sumPar2=0; // e2
int opcion = 1; // programa
	do
	{
cout << "\t    ****\tTrabajo Practico N6\t****\n";
cout << S3;
cout << "\nMenu de opciones:\n";
cout << "1.Cargar y mostrar vector \n2.Promedio, suma, mayor y menor \n3.Numeros pares del 10 al 68 \n4.Buscar elementos\n5.Vectores ABCD\n6.Ordenar de Mayor a Menor\n7.Encuesta\n8.Contar vocales y consonantes\n9.Informar parte entera de reales\n10.Uppercase\n11.Cantidad de letras en una palabra\n12.Salir\n\n";
cout <<"Opcion ->";
cin >> opcion;	
system("cls");

	switch (opcion)
		{
	case 1: // <<<<<<<<<<<<<<<<< EJ 1
	cout <<"Consigna: Escribir un programa que permita a un usuario cargar \ndatos a un vector de 15 elementos e informarlos separados por un \nespacio.\n";
	cout << "\nIngrese 15 numeros reales: \n";
	for (int i = 0; i < 15;i++) // cargar datos
	{
	cin >> vector1[i];
	}
	cout << "Estos son los 15 numeros ingresados: \n";
	for (int i= 0; i< 15;i++) // mostrar datos
	{
	cout << vector1[i] << "  ";
	}
	cout << "\n\n";
		break;
	case 2: // <<<<<<<<<<<<<<<<< EJ 2
   cout << "Consigna: \nCargar numeros a un vector de enteros de 10 elementos e informar:\na.Promedio de los numeros positivos ingresados\nb.Sumatoria de los que se encuentran en las posiciones impares del vector\nc.El numero mayor, el menor y la posicion donde se encuentran.\n\n";

	cout << "Ingrese 10 numeros enteros: \n";
	for (int i = 0; i < 10;i++) // cargar datos
	{
		cin >> vector2[i];
		if (vector2[i] > 0)
		{
			sum2 = sum2 + vector2[i];
			cont2=cont2+1;
		}
	}
	for (int i =0;i<10;i=i+2)
		{
			sumPar2 = sumPar2 + vector2[i];
		}
	
	prom2 = sum2 / cont2;
	
	cout << "\n\na. El promedio de numeros positivos es de " << prom2 << endl;
	cout <<"b. La sumatoria de los numeros en posiciones pares del vector es de: "<< sumPar2 << endl;
//	cout << "c.  Mayor: " << mayor2 << " en posicion "<<posMay2<<  "\n\tMenor: "<< menor2 << " en posicion " << posMen2;

		break;
	case 3:// <<<<<<<<<<<<<<<<< EJ 3
   cout << "Consigna: \nDeclarar un vector de 30 elementos y cargarle los numeros\n pares que se encuentran entre 10 y 68 inclusive. Informarlo.\n\n";

		break;
	case 4:// <<<<<<<<<<<<<<<<< EJ 4
   cout << "Consigna: \n Cargar un vector de enteros de 12 elementos, ingresar un \n numero a buscar en el arreglo , si el mismo existe, informar\n en que posicion del vector se encuentra. si no, informar \n *No se encuentra en el vector*.\n\n";

		break;
	case 5:// <<<<<<<<<<<<<<<<< EJ 5
   cout << "Consigna: \n Cargar desde el teclado dos vectores de enteros A y B de 5 elementos cada uno , generar un vector C, tambien de 5 elementos, donde cada posicion del mismo tendra almacenada la sumatoria de las mismas posiciones de los vectores A y B cargados al principio. Cargar otro vector D, donde cada posicion tendra almacenado el del primer elemento del vector A con el ultimo del vector B  y asi sucesivamente hasta completar D.\n\n";

		break;
	case 6:// <<<<<<<<<<<<<<<<< EJ 6
    cout << "Consigna: \n Ingresar desde el teclado numeros a un vector de enteros de 20 elementos e informar los mismos ordenados de mayor a menor.\n\n";
	
		break;
	case 7:// <<<<<<<<<<<<<<<<< EJ 7
   cout << "Consigna:\n Se realiza una encuesta a 10 personas de las cuales se ingresa un numero de 3 cifras identificatorio (validar el ingreso) y la edad de la misma, se pide informar:\na. Las personas mayores a 30 años con su numero identificatorio.\nb.Todas las personas ordenadas por edad de menor a mayor\nc. Todas las personas ordenadas por su numero identificatorio de mayor a menor. \n\n";

		break;
	case 8:// <<<<<<<<<<<<<<<<< EJ 8
   cout << "Consigna: \nCargar un vector tipo char de 12 elementos  e indicar cuantas vocales y consonantes contiene el mismo, informar.\n\n";

		break;
	case 9:// <<<<<<<<<<<<<<<<< EJ 9
   cout << "Consigna: \nSe ingresan numeros a un vector de reales de 5 elementos, informar la parte entera de los numeros ingresados.\n\n";

		break;
	case 10:// <<<<<<<<<<<<<<<<< EJ 10
   cout << "Consigna: \nSe carga un vector con letras minusculas, luego se pide el ingreso de otra letra, si la misma se encuentra en el vector, convertirla a mayuscula e informar el vector completo .\n Nota: la funcion toUpper(x) devuelve x en mayuscula, se encuentra en la libreria ctype.h \n\n";

		break;
	case 11:// <<<<<<<<<<<<<<<<< EJ 11
   cout << "Consigna: \nSe ingresa una cadena de caracteres, se pide informar la cantidad de letras que posee.\n\n";

		break;
	case 12:
		cout << "Realmente desea salir del programa?\n (Presione [y] para confirmar) ";
		char seguro = 'n';
		cin >> seguro;
		if (seguro == 'y')
		{
			programa = false;
		}
		break;
	
	
		} 
		system("pause");
		system("cls");
	} while (programa == true);
}
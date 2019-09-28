#include <iostream>
#include <conio.h>

using namespace std;
int main(){
char h = '*';
int a = 0,b=0;
for (int c = 0;c<=50;c++)
	{
		gotoxy(a,b);
		cout<< h <<"\n";
		a++;
		b++;
		sleep(2);
	}
	
}
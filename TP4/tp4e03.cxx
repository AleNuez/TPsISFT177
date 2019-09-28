#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int x = 0,y=0;
for (int j=0;j<44;j++)
{
	gotoxy (x,1); cout<<"*";
	x++;
}
for (int i=0;i<43;i++)
{
	gotoxy (y,1);cout<<" ";
	y++;
	
}
}
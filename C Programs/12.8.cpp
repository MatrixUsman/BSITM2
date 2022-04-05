#include <stdio.h>
#include <conio.h>	
int main()	
{
char s;	
do	
{
printf("Enter the current state of phone (\'w'\ for working \'d'\ for dead):\n"); 
scanf("%c", &s);
printf("Telephone is working");
}
while(s !='w'&& s != 'd');
getch();
return 0;
}


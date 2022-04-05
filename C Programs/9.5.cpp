#include <stdio.h>
#include <conio.h>
int main()	
{	
int a, b, x, y;		
a=b=x=y= 0;	
b = a++; 
y = ++x;
printf("a = %d \n b = %d \n", a, b); 
printf("x = %d \ny = %d \n", x, y); 
getch();
return 0;
}


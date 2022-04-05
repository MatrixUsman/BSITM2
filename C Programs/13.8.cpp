#include <stdio.h>
#include<conio.h>
float area(int b, int h);
int main()	
{	
int base, height;	
float ar;	
printf("Enter base: "); 
scanf("%d",&base); 
printf("Enter height: "); 
scanf("%d",&height); 
ar = area(base, height);
printf("Area of triangle is %.2f",ar);
getch();
return 0; 
}
float area(int b, int h) 
{
float a;
a = 0.5*b*h; return a;
}


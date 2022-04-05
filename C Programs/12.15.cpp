#include <stdio.h>
#include <conio.h>
int main()
{
int a, b, c, r;
printf("Enter first number: "); 
scanf("%d",&a);
printf("Enter second number: "); 
scanf("%d",&b);
c = 1;
r = 1;
do
{
r=r*a;
c=c+ 1;
}
while(c<=b);
printf("Result is %d",r);
 getch();
return 0;
}


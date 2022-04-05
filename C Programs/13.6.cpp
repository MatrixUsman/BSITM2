#include <stdio.h>
#include<conio.h>
void power(int a, int b);
int main()
{
int x, y;
printf("Enter two numbers: ");
 scanf("%d %d",&x, &y);
power(x,y);
getch();
return 0;
}
void power(int a, int b) 
{
int i, p;
p = 1;
for(i=1; i<=b; i++) 
	p=p*a;
printf("%d raise to the power %d is %d",a,b,p); 
}


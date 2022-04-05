#include <stdio.h>
#include<conio.h>
void check(int x, int y) 
{
if(x==y)
printf("Numbers are equal."); 
else
printf("Numbers not equal."); 
}
int main()
{
int a, b;
printf("Enter a number: "); 
scanf("%d", &a);
printf("Enter a number: "); 
scanf("%d", &b);
check(a, b);
}



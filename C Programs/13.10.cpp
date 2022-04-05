#include<stdio.h>
#include<conio.h> 
int fun(int n)
{
return n+10;
}
int main(void)
{
int a;
printf("Enter a number: ");
 scanf("%d", &a);
printf("%d", fun(a));
getch();
return 0;
}


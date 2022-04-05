#include<stdio.h>
#include<conio.h>
int main()
{
int m,n;
printf("Enter two numbers (separated by comma):"); 
scanf("%d %d",&m,&n);
m=m+10;
n=5*m;
printf("m=%d\t\t\t n=%d\n",m,n); 
getch();
return 0;
}


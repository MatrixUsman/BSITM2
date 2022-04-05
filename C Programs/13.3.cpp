#include <stdio.h>
#include <conio.h> 
void table(int n);
int main()
{	
int num;	
printf("Enter a number: ");	
scanf("%d",&num);	
table(num);	
getch();	
return 0;
}	
void table(int n)	
{	
int c;	
for(c=1; c<=10; c++) 
{
printf("%d * %d = %d \n",n,c,n*c);
}
}

#include <stdio.h>
#include<conio.h>
int g;
void fun(); 
int main()
{
printf("Enter a number: "); 
scanf("%d",&g);
printf("Value of g before function call: %d\n",g); 
fun();
printf("Value of g after function call: %d",g);
getch();
return 0;
}
void fun() 
{
g = g * 2; 
}


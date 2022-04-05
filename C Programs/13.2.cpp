#include <stdio.h>
#include <conio.h>
void max(int a, int b); 
int main()
{
int x, y;
printf("Enter two numbers: ");
 scanf("%d %d",&x, &y);
max(x,y);
getch();
return 0;
}
void max(int a, int b) 
{
if(a > b)
printf("Maximum number is %d",a); 
else
printf("Maximum number is %d",b);
}


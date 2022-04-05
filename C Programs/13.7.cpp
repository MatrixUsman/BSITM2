#include <stdio.h>
#include<conio.h>
int max(int a, int b);	
int main()	
{
int x, y, m;
printf("Enter two numbers: "); 
scanf("%d %d",&x, &y); 
m = max(x,y);
printf("Maximum number is %d",m); 
getch();
return 0;
}
int max(int a, int b) 
{
if(a > b)
return a; 
else
return b; 
}


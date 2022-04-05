#include<stdio.h>
#include<conio.h>
int main()
{
int x, y, z,res;
printf("Enter three numbers: "); 
scanf("%d %d %d", &x, &y, &z);
 res=x+y*z;
x=z+1;
printf("%d ", res); 
getch();
return 0;
}



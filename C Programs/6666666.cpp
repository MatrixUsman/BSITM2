#include<stdio.h>
#include<conio.h>
int main( )
{
 int i, j;
i = 1;
do
{
j=1;
do
{
printf("Outer: %d Inner: %d \n",i,j);
j++;
}
while(j<=3); 
i++;
}
while(i<=2);
getch();
return 0;
}


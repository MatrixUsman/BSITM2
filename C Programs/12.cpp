#include <stdio.h> 
#include <conio.h> 
int main()
{
int i, j;
i = 1;
do
{
j= i;
while( j<=7 )
{
printf("*"); 
j++;
}
printf("\n"); 
i++;
}
while(i<=7); 
getch();
return 0;
}


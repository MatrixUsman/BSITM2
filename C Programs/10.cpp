#include <stdio.h> 
#include <conio.h> 
int main()
{
int i, j;
for(i=1; i<=7; i++)
{
j = i;
do
{
printf("*"); 
j++;
}
while( j<=7 ); 
printf("\n"); 
}
getch();
return 0;
}


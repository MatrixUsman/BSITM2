#include <stdio.h>
 #include <conio.h> 
int main()
{
int i, j;
i= 1;
while(i<=7)
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
getch();
return 0;
}


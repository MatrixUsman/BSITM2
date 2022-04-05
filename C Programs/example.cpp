#include <stdio.h>
#include<conio.h>
int main()
{
int n;
printf( " Enter a number:");
 scanf("%d", &n);
if (n > 0)
printf( " The number is positive");
 if (n < 0)
printf( " The number is negative");
 if (n == 0)
printf( " The number is zero");
getch();
return 0;
}


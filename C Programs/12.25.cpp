#include <stdio.h> 
#include <conio.h>
int main() 
{
int n, c;
printf("Enter an integer: ");
 scanf("%d", &n);
for(c=10; c>=1; c--)
printf("%d * %d = %d\n", n, c, n*c) ;
getch();
return 0;
}


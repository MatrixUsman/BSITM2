#include <stdio.h>
#include <conio.h>
int main()	
{	
int n;	
printf("Enter number:"); 
scanf("%d", &n);
(n%3==0 ? printf("Divisible by 3") : printf("Not divisible by 3")); 
getch();
return 0;
}


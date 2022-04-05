#include <stdio.h>
#include <conio.h>	
int main()	
{
int n, c, f;
f = 1;
printf("Enter a number: "); 
scanf("%d",&n);
for(c=1; c<=n; c++) 
f = f * c;
printf("Factorial of %d is %d",n,f); 
getch();
return 0;
}


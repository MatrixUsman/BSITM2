#include <stdio.h>
#include <conio.h>
int main()	
{	
int n, c, f;	
c = 1;
f = 1;
printf("Enter a number: "); 
scanf("%d",&n);
while(c <= n)
 {
f=f*c; 
c=c+1;
 }
printf("Factorial of %d is %d",n,f);
getch();
return 0;
}


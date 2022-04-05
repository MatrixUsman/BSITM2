#include <stdio.h>
#include <conio.h> 
int main()
{
int n, p, j;
printf("Enter a number: "); 
scanf("%d", &n);
p = 1;
for(j=2; j<n; j++) 
	if(n%j==0)
{
p = 0;
break;
}
if(p==1)
printf("Prime number"); 
else
printf("Not prime number"); 
getch();
return 0;
}


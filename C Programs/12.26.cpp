#include <stdio.h>
#include <conio.h> 
int main()
{
int n, c;
long int sum;	
sum = 0;	
printf("Enter a number: ");	
scanf("%d",&n);
for(c=1; c<=n; c++)
sum = sum + (c * c);
printf("Sum squares is %d \n",sum); 
getch();
return 0;
}


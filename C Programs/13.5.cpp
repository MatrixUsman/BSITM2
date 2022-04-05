#include <stdio.h>
#include <conio.h>
 void factorial(int n);
int main()	
{	
int num;	
printf("Enter a number: "); 
scanf("%d",&num);
factorial(num); 
getch();
return 0;
}
void factorial(int n)
{
int i;
long fact; fact =1;
for(i=1; i<=n; i++) 
	fact *= i;
printf("Factorial of %d is %d",n,fact); 
}


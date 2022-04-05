#include <stdio.h>
#include <conio.h> 
int main()
{
long int product;
int c;	
product = 1;	
for(c=1; c<=10; c=c+2) 
product *= c;
printf("Result is %d",product); 
getch();
return 0;
}


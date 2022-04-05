#include <stdio.h>
#include <conio.h>
int main()
{	
int c, sum;		
c=1;	
sum = 0;	
while(c <= 5)	
{
printf("%d \n",c); 
sum = sum + c; 
c=c+1;
}
printf("Sum is %d",sum); 
getch();
return 0;
}


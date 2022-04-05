#include <stdio.h>
#include <conio.h>
int main()	
{	
int x, num;		
for(x=1; x<=5; x++)	
{	
printf("Enter a number: ");	
scanf("%d",&num);	
if(num<=0)
continue;
printf("You entered %d\n",num); 
}
getch(); 
}



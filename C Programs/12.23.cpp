#include <stdio.h>	
#include <conio.h>	
int main()	
{	
int tab, c;		
printf("Enter number for table: ");	
scanf("%d",&tab); 
for(c=1; c<=10; c++)	
printf("%d * %d = %d \n", tab, c, tab*c);	
getch();
return 0;	
}


#include <stdio.h>
#include <conio.h>	
int main()	
{	
int tab, len, c;		
printf("Enter number for table: ");	
scanf("%d",&tab);	
printf("Enter length of table: ");	
scanf("%d",&len);	
for(c=1; c<=len; c++)	
printf("%d * %d = %d \n", tab, c, tab*c);	
getch();
return 0;
}


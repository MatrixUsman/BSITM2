#include <stdio.h>
#include <conio.h> 
int main()
{
int month, age, days;
printf("Enter your age");
 scanf("%d",&age);
month=age *12; 
days=age * 365;
printf("age in months=%d\n",month);
 printf("age in days = %d",days);        	
 getch();
 return 0;
}


#include <stdio.h>
 #include <conio.h> 
int main()
{
int n;
printf("Enter any number: "); 
scanf("%d", &n);
if(!(n%2==0))
printf("You entered odd number."); 
else
printf("You enter even number."); 
getch();
return 0;
}


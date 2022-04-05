#include <stdio.h>	
#include <conio.h>	
int main()	
{	
int n = 1;		
display:
printf("%d \n", n),
n = n + 1; 
if(n <= 5)
goto display; 
getch();
return 0;
}


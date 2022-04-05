#include <stdio.h>
#include <conio.h>
int main()	
{	
int f;	
float c;	
printf("Fahrenheit\tCelsius \n");
for(f=50; f<=100; f=f+5)	
{	
c = 5.0/9.0 * (f -32);	
printf("%3d \t %6.2f \n", f, c);	
}	
getch();
return 0;	
}	


#include <stdio.h>
#include<math.h> 
#include <conio.h>
int main()
{
float number; 
positive:
printf(" please enter a positive number: "); 
scanf("%f", &number);
if (number < 0)
goto positive; 
else
printf("square root of %0.2f is %0.2f", number,sqrt(number)); 
getch();
return 0;
}


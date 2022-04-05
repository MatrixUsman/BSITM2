#include <stdio.h> 
#include <conio.h>
float kilo(float); 
int main()
{
float p, k;
printf("Enter weight in pounds: "); 
scanf("%f", &p);
k = kilo(p);
printf("%.2f pounds = %.2f kilograms.", p, k);
 getch();
 return 0;
}
float kilo(float pn) 
{
return pn /2.205; 
}


#include <stdio.h>
#include <conio.h>
 #define PI 3.141
int main()
{
float r, area;	
printf("Enter radius: ");	
scanf("%f", &r);
area = 2.0 * PI * r;
printf("Area = %5.2f", area); 
getch();
return 0;
}


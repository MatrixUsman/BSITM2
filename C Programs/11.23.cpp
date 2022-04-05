#include <stdio.h> 
#include <conio.h>
int main()
{
float value; 
char con;
printf("Enter conversion type: \n"); 
printf("C for Centimeters \n");
printf("L for Liters \n"); 
printf("K for Kilometers \n");
 printf("G for Kilograms \n"); 
scanf("%c", &con);
printf("Enter a value: ");
 scanf("%f", &value); 
switch(con)
{
case 'C':
case 'c':
printf("Value: %f", value * 2.54); 
break;
case 'L':
case 'l':
printf("Value: %f", value * 3.785); 
break;
case 'K':
case 'k':
printf("Value: %f", value * 1.609); 
break;
case 'G':
case 'g':
printf("Value: %f", value * .4536); 
break;
default:
printf("lnvalid conversion type");
}
getch();
return 0;
}


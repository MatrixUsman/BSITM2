#include <stdio.h>
#include<conio.h>>
int main()
{
float area, radius, circumference; 
int choice;
printf("Enter radius:"); 
scanf("%f", &radius);
printf("Enter 1 for area and 2 for circumference: ");
 scanf("%d",&choice);
if(choice == 1)
{	
area = radius * radius *3.141;	
printf("Area: %5.2f\n", area);	
}
else if(choice == 2) 
{
circumference = 2.0 * 3.141 * radius;
printf("Circumference: %f", circumference);
}
else
printf("Invalid choice.");
getch();
return 0;
}


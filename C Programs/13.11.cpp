#include<stdio.h>
#include<conio.h>
 #define PI 3.141
float circum(float r)
{
float a;
a = 2.0*PI*r;
 return a;
}
int main()
{
float rad, area;
printf("Enter radius: "); 
scanf("%f", &rad);
printf("Area = %5.2f", circum(rad));
 getch();
 return 0;
}


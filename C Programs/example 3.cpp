#include <stdio.h>
 #include <conio.h> 
int main()
{
int x, y;
printf("Enter the value for x and y-coordinate");
 scanf(" %d %d", &x, &y);
if (x ==0)
{
if ( y ==0)
printf( " The point lie on the origin"); 
else
printf(" The point lie on y-axis"); 
}
else if (x>0)
{
if(y ==0)
printf("The point lie on x-axis"); 
else if( y> 0)
printf("The point lies in the 1st quadrant");
 else
printf(" The point lies in 4th quadrant");
}
else
if( y==0)
printf(" The point lies on x-axis"); 
else if (y>0)
printf(" The point lies in 2nd quadrant©");
else
printf(" The point lies in 3rd quadrant");
getch();
return 0;
}



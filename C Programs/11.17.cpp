#include <stdio.h>
#include <conio.h> 
int main()
 
{
int a, b, c; 
printf("Enter three numbers: "); 
scanf("%d %d %d", &a, &b, &c);
 if(a>b && a>c)
printf("Maximum number is %d", a); 
else if(b>a && b>c)
printf("Maximum number is %d", b); 
else
printf("Maximunn number is %d", c);
 getch();
 return 0;
}


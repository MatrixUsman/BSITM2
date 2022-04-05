#include <stdio.h>
#include <conio.h> 
int main()
{
int n, s; 
s = 0;
 do
{
printf("Enter a number:"); 
scanf("%d",&n);
s = s + n;
}
while(!(n>=0 && n<=15)); 
printf("Sum = %d", s); 
getch();
return 0;
}


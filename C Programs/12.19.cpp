#include <stdio.h> 
#include <conio.h>
int main()
{
int c, sum; 
sum = 0;
for(c=1; c<100; c=c+2) 
sum = sum + c;
printf("Sum = %d ", sum); 
getch();
return 0;
}


#include <stdio.h>
#include <conio.h> 
int main()
{
int n, sum, pro; 
sum = 0;
pro = 1;
for(n=1; n<=10; n++)
{
if(n%2==0) 
pro = pro * n; 
else
sum = sum + n;
}
printf("Sum of positive odd numbers: %d\n", sum); 
printf("Product of positive even numbers: %d", pro); 
getch();
return 0;
}


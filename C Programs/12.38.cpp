#include <stdio.h> 
#include <conio.h> 
int main()
{
int m, n; 
m = 4; 
do
{
n = m; 
do
{
printf("%d \t",m); 
n--;
}
while(n>=1); 
printf("\n"); 
m--;
}
while(m>=1); 
getch();
return 0;
} 


#include <stdio.h>
 #include <conio.h>
int main()
{
int n, s, e; 
printf("Enter starting number:");
 scanf("%d",&s);
printf("Enter ending number:"); 
scanf("%d",&e);
n = s;
while(n<=e) 
{
if(n%2==0)
printf("%d \n", n); 
n++;
}
getch();
return 0;
}


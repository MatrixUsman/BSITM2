#include <stdio.h>
#include <conio.h>
int main()
{
int n;
n = 1;
while(n != -1)
{
printf("Enter a number:"); 
scanf("%d",&n);
printf("You entered %d \n", n); 
}
printf("End of Program...");
 getch();
 return 0;
}


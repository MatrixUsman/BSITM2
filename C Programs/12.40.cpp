#include <stdio.h>
 #include <conio.h> 
int main()
{
int num, m, n; 
long int f;
printf("Enter the ending integer: "); 
scanf("%d", &num);
printf("\ninteger \t Factorial \n"); 
for(m=1; m<=num; m++)
{
         f = 1;
for(n=1; n<=m; n++) 
	f=f*n;
printf("%3d \t\t %6d \n", m,f);
}
getch();
return 0;
}


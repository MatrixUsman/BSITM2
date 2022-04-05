#include <stdio.h>
#include <conio.h> 
int main()
{
int num, sum, m, n;
printf("Enter the ending integer: "); 
scanf("%d", &num);
printf("\ninteger \t Sum \n");
for(m=1; m<=num; m++)
{
sum = 0;
for(n=1; n<=m; n++) 
	sum = sum + n;
printf("%3d \t\t %3d \n", m, sum);
}
getch();
return 0;
}


#include <stdio.h>
#include <conio.h> 
int main()
{	
int i, s;	
float avg;	
s = 0;
for(i=1; i<=10; i++)	
{	
printf("%d\n", i); 
s = s + i;
}
avg = s /10.0;
printf("Average: %.2f", avg);
getch();
return 0;
}


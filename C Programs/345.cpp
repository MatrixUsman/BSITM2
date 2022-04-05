#include<stdio.h>
#include<conio.h>
int main()
{
int i, j, product, count;
count = 3;
for(i=1; i<count; i++)
{
for(j=1; j<=i; j++)
product =i* j * j;
printf("%d \n", product);
}
getch();
return 0;
}


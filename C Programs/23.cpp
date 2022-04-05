#include<stdio.h>
#include<conio.h>
int main()
{
int x = 10, y = 4;
{
do
x = x - 2;
y = y + 4;
printf("%d \t", x);
}
while (y <= 16);
x=x+ 1;
printf("%d %d", x ,y);
getch();
return 0;
}


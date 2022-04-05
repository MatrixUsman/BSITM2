#include <stdio.h>
#include <conio.h> 
int Add(int x, int y);
int main()
{
int a, b, s;
printf("Enter two numbers: "); 
scanf("%d %d", &a, &b); 
s = Add(a, b);
printf("%d + %d = %d", a, b, s);
 getch();
 return 0;
}
int Add(int x, int y) 
{
return x + y; 
}


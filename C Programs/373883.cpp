#include <stdio.h>
#include <conio.h>	
int main()	
{
int* var;	
int num = 25;	
var = &num;
printf("Address of variable num is %x", &num);
 printf("\nContents of num is %d", num);
printf("\nAddress of memory location pointed to by var is %x", var); 
printf("\nContents of memory pointed by var is %d", *var);
getch();
return 0;
}

#include<stdio.h>
#include<conio.h>
int main ()
{

     char name[25],address[30];
     int age;
     printf("enter your name:");
     scanf("%s",name);
     printf("\n enter your address:");
     scanf("%s",address);
     printf("\n your age is:");
     scanf("%d",age);
     printf("your name is: %s\n", name);
     printf("your address is: %s\n", address);
     printf("your age is: %d", age);
	return 0;
	getch();
}

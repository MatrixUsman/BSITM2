#include<stdio.h>
#include<conio.h>
int main()
{
     char name[25],address[30];
     int age;
     printf("enter your age:");
     scanf("%d", &age);
     printf("enter your name:");
     scanf("%s",name);
     printf("enter your address:");
     scanf("%s",address);
     printf("your name is%s\n",name);
     printf("your address is%s\n",address);
     printf("your age is %d\n",age);
	return 0;
	getch();
}

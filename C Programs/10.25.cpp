#include <stdio.h>
#include <conio.h>	
int main()	
{	
char book[50]; 
printf("Enter name of your favorite book: "); 
gets(book);
printf("Your favorite book is: "); 
puts(book);
getch();
return 0;
}


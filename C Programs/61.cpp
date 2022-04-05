#include <stdio.h>
#include <conio.h> 
int main()
{ 
char c = 'A';	
do	                
{	
printf(" %c ", c);	
c = c + 2;		
} 
while ( c <= 'I' );
getch();
return 0;
}


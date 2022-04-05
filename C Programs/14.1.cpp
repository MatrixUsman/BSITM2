#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
int main()
{
FILE *out; 
char ch;
out = fopen("c:\\test.txt", "a");
 fputc('\n', out);
printf("Enter a character (. to end): "); 
ch = getche();
while(ch != '.')
{
fputc(ch, out);
 ch = getche();
}
fclose(out);
getch();
return 0;
}


#include <stdio.h> 
#include <stdlib.h>
 #include <conio.h>
int main()
{
FILE *out; 
char ch;
out = fopen("c:\\test.txt", "W");
printf("Enter a character (. to end): "); 
ch = getche();
while(ch != '.') 
{
fputc(ch, out); 
ch = getche();
}
fclose(out);
}




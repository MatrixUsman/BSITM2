#include <stdio.h>
 #include <stdlib.h> 
#include <conio.h>
int main()
{
FILE *in; char ch;
if((in = fopen("cAltest.txt", "r"))==NULL) 
printf("File opening error.");
while((ch = fgetc(in)) != EOF)
 printf("%c",ch);
fclose(in);
getch();
return 0;
}


#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
int main()
{
FILE *out;
 char ch[25];
 int i;
if((out = fopen("c:\\stest.txt", "w")) == NULL) 
printf("File opening error.");
for(i=0; i<3; i++)
{
printf("Enter string: ");
 gets(ch);
fputs(ch, out); 
fputs("\n", out);
}
fclose(out);
 getch();
 return 0;
}


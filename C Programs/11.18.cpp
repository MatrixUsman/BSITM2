#include <stdio.h>
#include <conio.h>
int main()	
{	
char ch;	
printf("Enter any character:"); 
scanf("%c", &ch);
if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='U' || ch=='u')
printf("You entered a vowel: %c", ch); 
else
printf("You did not enter a vowel: %c", ch); 
getch();
return 0;
}


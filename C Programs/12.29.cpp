 #include <stdio.h>
#include <conio.h>
int main()
{
int fail, full, marks, total, c;
 float avg = 0.0;
fail = full = total = 0;
for(c=1; c<=35; c++)
 {
printf("Enter marks: "); 
scanf("%d", &marks); 
total = total + marks;
 if(marks < 50)
fail++;
if(marks==100) 
	full++;
}
avg = total / 35.0;
printf("Average marks: %.2f\n", avg);
printf("Failed students: %d\n", fail);
printf("Students who scored 100: %d\n", full); 
getch();
return 0;
}



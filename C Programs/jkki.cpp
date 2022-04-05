#include<stdio.h>
#include<conio.h>
int main()
{
	float k;
	double m;
	printf("Enter distance in kilometers:");
	scanf("%f",&k);
	m = k*1000;
	printf("\n%f kilometers = %f meters", k,m);
	return 0;
	getch();
}

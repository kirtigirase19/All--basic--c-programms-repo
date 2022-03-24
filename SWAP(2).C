//program for swaping of two numbers without using temporary variable//
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter the value of A=");
	scanf("%d",&a);
	printf("\nEnter the value of B=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nEnter the value of A is=%d",a);
	printf("\nEnter the value of B is =%d",b);
	getch();
}
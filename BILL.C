#include<stdio.h>
#include<conio.h>
void main()
{       int price=30,qty=6,bill=0;
	clrscr();
	bill=price*qty;
	printf("\nIce cream price=\t%d Rs.",price);
	printf("\nIce cream quatity=\t%d",qty);
	printf("\nTotal bill=\t\t%d Rs.",bill);
	getch();
}
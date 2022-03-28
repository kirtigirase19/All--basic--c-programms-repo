//to write a program convert inch into different parameters//
#include<stdio.h>
#include<conio.h>
void main()
{
	 float inch,feet,meter,centimeter;
	clrscr();
	printf("\nEnter the Length in Inch=");
	scanf("%f",&inch);
	feet=inch/12;
	meter=inch*0.0254;
	centimeter=inch*2.54;
	printf("\nFeet=%3f",feet);
	printf("\nMeter=%3f",meter);
	printf("\nCentimeter=%3f",centimeter);
	getch();
}

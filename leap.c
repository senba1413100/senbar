
#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("enter the year:");
scanf("%d",&year);
if((year%4==0)&&(year%100!=0))
printf("leap year");
else
printf("not a leap year");
getch();
}

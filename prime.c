#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,prime=0,flag=0;
printf("enter the number");
scanf("%d",&n);
prime=n/2;
for(i=2;i<=prime;i++)
{
    if(n%i==0)
    {
        printf("number is not prime");
        flag=1;
        break;
    }
}
if(flag==0)
     printf("number is prime");
    getch();
}



#include<stdio.h>
#include<conio.h>
void main()
{
int i, n;
clrscr();
printf("\n Enter a number ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
break;
}
if(i==n)
printf("It is a prime number");
else
printf("It is not a prime number");
getch();
}
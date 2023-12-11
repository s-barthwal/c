#include<stdio.h>
#include<conio.h>
void main()
{
int n, sum=0, r, temp;
clrscr();
printf("Enter any three digit number :\n");
scanf("%d",&n);
temp = n;
while(n>0)
{
r = n%10;
sum = sum+(r*r*r);
n = n/10;
}
if(temp==sum)
{
printf("It is an armstrong number");
}
else
printf("It is not an armstrong number");
getch();
}
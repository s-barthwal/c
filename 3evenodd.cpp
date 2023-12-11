#include<stdio.h>
#include<conio.h>
int main()
{
int x;
clrscr();
printf("Enter a number ");
scanf("%d",&x);
if(x%2==0)
printf("It is an even number");
else
printf("It is an odd number");
getch();
}
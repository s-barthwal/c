#include<stdio.h>
#include<conio.h>
void swap(int*a, int*b);
void main()
{
int a, b;
clrscr();
printf("Enter the value of a and b for swapping \n");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("Now the value of a is =%d\n",a);
printf("Now the value of b is =%d\n",b);
getch();
}
void swap(int*a, int*b)
{
int temp;
temp = *a;
*a =*b;
*b = temp;
}
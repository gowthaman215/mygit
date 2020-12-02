

#include <stdio.h>
#include <conio.h>

int main()
{
int num;
clrscr();
printf("Enter a number :");
scanf("%d",&num);

if(num%11 == 0)
{
printf("Number %d is divided by 11\n");
}
else
{
printf("Number %d is not divided by 11\n");
}

getch();
return 0;
}

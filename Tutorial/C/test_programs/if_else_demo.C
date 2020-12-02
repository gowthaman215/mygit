// program to read a number and find whether is it odd or even.

#include <stdio.h>
#include <conio.h>
int main()
{
int number;

clrscr();

printf("Enter a number : ");
scanf("%d",&number);

if((number%2)!=0)
{
printf("ODD NUMBER\n");
}
else
{
printf("EVEN NUMBER \n");
}

return 1;
}


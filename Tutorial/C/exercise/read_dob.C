#include <stdio.h>
#include <conio.h>
int main()
{
int date,month,year;
clrscr();

printf("Enter your date of birth [dd/mm/yyyy] ");
scanf("%d/%d/%d", &date, &month,&year);

printf("Your date of birth is %d - %d - %d  ",date,month,year);

return 0;
}
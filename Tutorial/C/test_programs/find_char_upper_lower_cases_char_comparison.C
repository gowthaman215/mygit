#include <stdio.h>
#include <conio.h>

int main()
{
char ch;
clrscr();

printf("Enter a character  ");
scanf("%c", &ch);

if (ch>='A' && ch <='Z')
{
printf("Given character %c is in UPPER CASE" ,ch);
}
else if (ch>='a' && ch<='z')
{
printf("Given character %c is in lower case", ch);
}
else
{
printf("Given character is not an alphabet");
}
getch();
return 0;
}
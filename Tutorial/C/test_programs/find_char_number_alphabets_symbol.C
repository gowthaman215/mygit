#include <stdio.h>
#include   <conio.h>

int main()
{
char ch;
clrscr();

printf("Enter a character : ");
scanf("%c",&ch);

if(ch >= 48 && ch <= 57)
{
   printf("given character %c is a number\n",ch);
}
else if( (ch >= 65 && ch <=90) || (ch >= 97 && ch <= 122) )
{
   printf("given character %c is a alphabet\n",ch);
}

else
{
  printf("given character %c is a symbol\n",ch);
}

getch();

return 1;
}
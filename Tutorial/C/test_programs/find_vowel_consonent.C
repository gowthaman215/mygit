#include  <stdio.h>
#include  <conio.h>

int main()
{
char ch;

clrscr();

printf("Enter a character : ");
scanf("%c" ,  &ch);

if( (ch >= 65 && ch <=90) || (ch >= 97 && ch <= 122))
{
   if(ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
   ch=='A' || ch == 'E' || ch == 'I' || ch == 'U' || ch == 'U')
   {
      printf("character %c is vowel\n", ch);
   }
   else
   {
      printf("character %c is consonent\n", ch);
   }

}
else if( ch >= 48 && ch <= 57 )
{
   printf("given character %c is a number\n",ch);
}

else
{
  printf("given character %c is a symbol\n",ch);
}

getch();
return 0;
}
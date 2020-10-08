#include<stdio.h>
#include<conio.h>

int main()
{
/*
set of characters is known as a string.
string value shoule be specified with in double quotes ("") .
we will define string as character array or array of character. array always terminated with null('\0' , 0x00) character.

example : "Program" , "AWE22re", "2352#^@*&"
*/
char single_character = 'A';

char name[5]; // array declaration
clrscr();

printf("size of name array is %d\n", sizeof(name));

printf("Enter your name : ");
scanf("%s", name);

printf("Your name is %s \n",name);

getch();

return 0;
}
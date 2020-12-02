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
char gender;

char name[50]; // array declaration
float height;

clrscr();

printf("size of name array is %d\n", sizeof(name));

printf("Enter your name : ");
scanf("%[ ,a-zA-Z]s", name); //&name[0]

fflush(stdin);
printf("Enter gender : ");
scanf("%c", &gender);

printf("Enter height : ");
scanf("%f", &height);


printf("Your name is %s \n",name);

if(gender=='M')
{
printf("Your gender is Male\n");  //True Block
}
else  //false block
{
printf("Your gender is Female\n");
}
printf("Your height is %1.1f \n",height);

getch();

return 0;
}
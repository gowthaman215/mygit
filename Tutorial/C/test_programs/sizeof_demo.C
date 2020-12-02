/*
sizeof operator
================

it will calculate and returns sizeof any datatype or variable.

syntax:
------

sizeof <datatype>;
sizeof <variable>;
sizeof ( <datatype> );
sizeof ( <variable> );

Example
------

sizeof(int);

int i;
sizeof(i);

*/


#include <stdio.h>
#include <conio.h>
int main()
{
int intType=20;
clrscr();

printf("size of intType variable is %d bytes\n", sizeof(intType));
printf("value of variable intType is %d\n", intType);
printf("address of variable intType is %x", &intType);

return 0;
}
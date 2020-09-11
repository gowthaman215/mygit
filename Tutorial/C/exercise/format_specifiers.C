#include <stdio.h>
#include <conio.h>

int main()
{

char ch='a';

clrscr();

printf("%c\n", ch); // %c - single character value.
printf("%s\n", "string");

printf("%d\n", -12); // %d - signed decimal number
printf("%i\n", -123); // %i - signed integer number
printf("%u\n", 12);  // %u - unsigned decimal value

printf("%ld\n", 2147483648); // %ld - long signed decimal number. Range -2147483648 to 2147483647
printf("%lu\n", 4294967295); // %lu - long unsigned decimal number. Range 0 to 4294967295

printf("%f\n", 23.988 ); // %f - normal fraction number
printf("%g\n", 3121342141234134123413.148898986); // %g - normal/exponential fraction number
printf("%e\n", 321.149789); // %e - always exponential form of fractional number
getch();
return 0;
}
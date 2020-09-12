#include <stdio.h>
#include <conio.h>

int main()
{

char ch='a';

clrscr();

printf("%c\n", ch); // %c - single character value. Ramge: 0 - 255 (ASCII code)
printf("%s\n", "string"); // %s - null terminated set of character. Range: it can be any number of bytes.
printf("%d\n", -12); // %d - signed decimal number. Range: -32768 to 32767
printf("%i\n", -123); // %i - signed integer number Range: -32768 to 32767
printf("%u\n", 12);  // %u - unsigned decimal value Range: 0 - 65535

printf("%ld\n", 2147483648); // %ld - long signed decimal number. Range: -2147483648 to 2147483647
printf("%lu\n", 4294967295); // %lu - long unsigned decimal number. Range: 0 to 4294967295

printf("%f\n", 23.988 ); // %f -float ie., normal fraction number. Range : 1.2E-38 to 3.4E+38
printf("%g\n", 3121342141234134123413.148898986); // %g - double ie., normal/exponential fraction number Range :  2.3E-308 to 1.7E+308
printf("%e\n", 321.149789); // %e - double, ie., always exponential form of fractional number. Range :  2.3E-308 to 1.7E+308
printf("%lf\n", 2313123131211231313131231.13123121); //%lf - long double. Range : 3.4E-4932 to 1.1E+4932
printf("%#x\n", 15); // %x - hexadecimal. example: 0xf (0x - hexadecimal prefix)
printf("%#o\n", 8); // %o - octal. example: 010 (0 - octal prefix)
printf("%p\n",&ch); // %p - pointer(memory address). sizeof pointer is 4 bytes
getch();
return 0;
}
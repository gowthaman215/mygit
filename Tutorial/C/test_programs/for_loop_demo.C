/*program to print series from 1 to 10 line by line.


output
------
1
2
3
4
5
6
7
8
9
10

*/

#include <stdio.h>
#include <conio.h>

int main()
{
int i;
int begin;
int end;

clrscr();

printf("Enter begining value (MAX) : ");
scanf("%d",&begin);
printf("Enter end value (MIN) : ");
scanf("%d",&end);


for (i=begin; i>=end; i--) //i-- => i=i-1
{
printf("%d\n",i);
}

return 0;
}
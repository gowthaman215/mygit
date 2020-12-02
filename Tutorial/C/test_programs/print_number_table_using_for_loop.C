/*program to print number table. get number table details to user.

1 x 2 = 2
2 x 2 = 4
3 x 2 = 6
.
.
10 x 2 = 20
*/

#include <stdio.h>
#include <conio.h>

int main()
{
int i;
int ntable;

clrscr();

printf("Enter the number table which you want : ");
scanf("%d",&ntable);


for (i=1; i<=10; i++)
{
printf("%d x %d = %d\n",i, ntable, i*ntable);
}

getch();
return 0;
}
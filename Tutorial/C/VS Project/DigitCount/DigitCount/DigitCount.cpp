// DigitCount.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
int number,reminder,count=0;
printf("enter the number\n");
scanf("%d",&number);
while(number>0)
{
number=number/10;
count=count+1;
}
printf("number of digits in given number=%d",count);
fflush(stdin);
getc(stdin);
return 0;
}

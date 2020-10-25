// AmstrongNumberInbuildFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
system("cls");

int originalNumber;
int tempNumber;
int power=0;
int remainder;
int sum=0;
bool isAmstrong=false;

// Input
printf("Enter a Number : ");
scanf("%d", &originalNumber);

// Preserving Original Number
tempNumber = originalNumber;

// Find number of digits. its considered as power
while(tempNumber > 0)
{
tempNumber = tempNumber / 10;
power ++;
}

// Restore Original Number
tempNumber = originalNumber;

// Extract Each digit and find its power then sum all result
while(tempNumber > 0)
{
	remainder = tempNumber % 10;
	sum = sum + pow((float) remainder,power); // sum of power of each digits
	tempNumber = tempNumber / 10;
}

// compare sum and original number

if (originalNumber == sum)
{
  isAmstrong=true;
}

if(isAmstrong)
{
	printf("%d is a Amstrong Number\n", originalNumber);
}
else
{
	printf("%d is not a Amstrong Number\n", originalNumber);
}

system("pause");
return 0;
}

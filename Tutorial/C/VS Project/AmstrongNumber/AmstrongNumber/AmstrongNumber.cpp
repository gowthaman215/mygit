// AmstrongNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int powr(int x, int y);

int main()
{

    int number, temp, digit, power=0, sum=0;

	printf("Enter a number : ");
	scanf("%d",&number);

	temp = number;

	while (temp>0)
	{
		digit = temp % 10;
		power ++;
		temp = temp / 10;
	}

	temp = number;

    while (temp>0)
	{
		digit = temp % 10;
		//sum = sum + powr(digit,power);
		sum = sum + pow((float)digit,power);
		temp = temp / 10;
	}

	printf("sum %d\n",sum);
	
	if (number == sum)
		printf ("Given number %d is Amstrong number.\n",number);
	else
		printf ("Given number %d is NOT an Amstrong number\n",number);

	system("pause");
	return 0;
}

int powr(int x, int y)
{
	int power=1;
	int i;
	for(i=1;i<=y;i++)
	{
		power = power * x;
	}

	return power;
}


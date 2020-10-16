// ReverseNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number,remainder,rnumber=0,temp;

	printf("Enter a number : ");
	scanf("%d",&number);
	temp = number;
	/*
	number = 5673 = 1*10 , 10*10, 100*10, 1000
	5673 = 5*1000 + 6*100 + 7*10 + 3*1
	3765 = 3*1000 + 7*100 + 6*10 + 5*1

	
	temp = 5673/ 567/ 56/ 5/ 0 
	remainder = 3/ 7/ 6/ 5
	rnumber = 0/ 3/ 37/ 376/ 3765

	*/
	while(temp>0)
	{
		remainder = temp % 10; //modulo division
		rnumber = rnumber * 10 + remainder; 
		temp = temp / 10;
	}
    
	printf("Reverse of given number %d is %d\n",number,rnumber );
	
	system("pause");
	return 0;
}

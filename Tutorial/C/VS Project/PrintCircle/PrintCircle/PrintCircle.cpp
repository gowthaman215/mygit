// PrintCircle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float r=50;
	float i,j;
	float p;

	p=floor((4*r-3)/8);
    for (i=p; i>=-p; i--)
	{
		for (j=-r; j<=r; j++)
		{	
		    if(r*r*i*i+p*p*j*j <= r*r*p*p )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}


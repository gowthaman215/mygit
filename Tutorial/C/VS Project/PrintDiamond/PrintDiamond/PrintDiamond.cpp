// PrintDiamond.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,rows=5;

	for(i=1; i<=rows; i++)
	{
	    for (j=1;j<=(rows-i);j++)
		{
			printf(" ");
		}

		for (j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}

		printf("\n");

	}

	
	for(i=rows-1; i>=1; i--)
	{
	    for (j=1;j<=(rows-i);j++)
		{
			printf(" ");
		}

		for (j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}

		printf("\n");

	}
	

	system("pause");
	return 0;
}



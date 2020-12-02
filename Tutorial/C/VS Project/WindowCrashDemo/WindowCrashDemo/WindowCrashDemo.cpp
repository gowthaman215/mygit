// WindowCrashDemo.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[3];
	printf("Start\n");
	//printf("%s\n",2);
	array[8] = 'd';
	printf("%c\n",array[8]);
	printf("End\n");
	system("pause");
	return 0;
}


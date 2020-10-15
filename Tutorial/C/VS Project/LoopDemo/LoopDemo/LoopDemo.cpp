// LoopDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>


int main()
{
   

	/*

	1. For Loop
	============
	 - Entry checking loop

	syntax:
	for (init;cond;inc/decr)
	{
	  // set of statement
	}

	//init
	for (;cond;)
	{
	  // set of statement
	  //inc/decr
	}


	2. while loop
	==========

	- entry checking
	
	1. control will enter into while loop
	2. while condition will be checked
	3. if while condition true , control will enter into while loop body and executes all instructions of while loop
	4. end of the while  loop control will check while loop condition again and repeat step 3.

	syntax:

	while(cond)
	{
	//set of statement.
	}


	//init
	while(cond)
	{
	//set of statement
	//inc/decr
	}

	3. Do..while
	============

	- exit checking looping statement.
	
	syntax
	=======
	
	do
	{
	  //Set of statement
	}while (condition);

	//init
	do
	{
	  //Set of statement
	  //inc/decr
	}

	*/
	// Counting Digits:  799979 -> 6, 86698778979 -> 11

	int num,  temp, cycle=0,digitcount=0;
	printf("Enter a number : ");
	scanf("%d", &num);

	temp = num;
	/*
	num=789;
	cycle 1 ==>  num=num/10; -> 78
	cycle 2 ==>  num=num/10; -> 7
	cycle 3 ==>  num=num/10; -> 0
	*/

	while(temp>0)
	{

	   cycle = cycle + 1; // cycle++ or ++cycle
       temp=temp/10; // temp /= 10
	   
	}

	digitcount = cycle;

	printf("total digits in a given number %d is %d",num,digitcount);

	fflush(stdin);
	getc(stdin);
	return 0;
}


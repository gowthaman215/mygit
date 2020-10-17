// DowhileDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	/*
	 * do
	 * {
	 *
	 *  set of do while statements
	 *
	 * }while(condition);
	 *
	 */

	int choice;
	int number1,number2,result;

	do
	{
		printf("\n\n\n");
		printf("Arithmetic Operation\n");
		printf("====================\n");
		printf("\n\n\n");
		printf("1. Add\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Exit\n");
		printf("\n\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: 
				printf("Enter number 1 : "); 
				scanf("%d",&number1);
				printf("Enter number 2 : "); 
				scanf("%d",&number2);
				result = number1 + number2;
				printf("Addition of %d and %d is %d\n",number1,number2,result);
				break;

			case 2: 
				printf("Enter number 1 : "); 
				scanf("%d",&number1);
				printf("Enter number 2 : "); 
				scanf("%d",&number2);
				result = number1 - number2;
				printf("Subracting %d from %d is %d\n",number2,number1,result); 
				break;

			case 3: 
				printf("Enter number 1 : "); 
				scanf("%d",&number1);
				printf("Enter number 2 : "); 
				scanf("%d",&number2);
				result = number1 * number2;
				printf("Multiplication of %d and %d is %d\n",number1,number2,result); 
				break;

			case 4: 
				printf("Enter number 1 : "); 
				scanf("%d",&number1);
				printf("Enter number 2 : "); 
				scanf("%d",&number2);
				result = number1 / number2;
				printf("Dividing of %d by %d is %d\n",number1,number2,result); 
				break;

			case 5: 
				printf("Exiting application..\n");
				exit(0);
				break;

			default: printf("Invalid Option\n");
		}

	}while(choice!=5);


	system("pause");
	return 0;
}


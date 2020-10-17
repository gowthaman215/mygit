/*
 ============================================================================
 Name        : DowhileDemo.c
 Author      : Gowthaman Palanisamy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
1. menu driven programming - based on user activity on command lines, the flow differs (GUI application) (CUI application)
2. event driven programming - based on user activity on graphical element, the flow differs (GUI application)
3. data driven programming - Based on facts program flow will be determined.
*/

//write a menu driven program using do while loop. to do random arithmetical operation.

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

	do
	{
		printf("Arithmetic Operation\n");
		printf("====================\n");
		printf("\n\n\n");
		printf("1. Add\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("\n\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: printf("Addition\n"); break;
			case 2: printf("Subtraction\n"); break;
			case 3: printf("Multiplication\n"); break;
			case 4: printf("Division\n"); break;
			default: printf("Invalid Option\n");
		}

	}while(choice<=4);



	return 0;
}

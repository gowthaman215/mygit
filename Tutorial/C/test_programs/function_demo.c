#include <stdio.h>

int add (int n1, int n2); //Function Declaration.

int main() // main "calling function" function of add.
{
  int result;
  result = add(2,5); //function call or function calling, here add is "called function"
  printf("addition - %d",result);
  return 0;
}

int add (int n1, int n2) // Function Definition.
{
   return n1+n2;
}


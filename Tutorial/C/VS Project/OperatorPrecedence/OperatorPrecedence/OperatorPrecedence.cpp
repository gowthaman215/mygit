// OperatorPrecedence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
int x=10;
int y=++x + x++ + x;
cout << y << endl;
cout << x << endl;
system("pause");
return 0;
}
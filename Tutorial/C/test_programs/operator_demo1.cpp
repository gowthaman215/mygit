#include <iostream>
using namespace std;

int main()
{
int x = 10;
//int y = ++x + x++ + x;
int y= 10++;
//int y=(10+5)*8*1%3/1-1;
//int y=10 / 8 % 3 * 8 + 3 - 1 - -1;
cout << y << endl;
cout << x << endl;
return 0;
}

/*
unary operator:
++  increament operator.
--  decrement operator.

   10 / 8 % 3 * 8 + 3 - 1 - -1;


   ((((((10 / 8) % 3) * 8) + 3 )- 1 )- (-1));

   y+=10; ==> y=y+10

   x+=(x++)+(++x)+x;

   x = x + (x++) + (++x) + x

   x = 11 + 11 + 11 + 11








*/


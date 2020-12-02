//Decision making in C program

/* Decision making is a process of selecting correct way
amoung multiple alternative ways to resolve a problem.

selection of a perticular way to resolve problem is based on some
condition/relation and based on logics. since decision making process is known as contional way
of processing.

condition is determined by conditional operators/relational operator.

Conditional Operator
====================

Operator           Name

==                 Equals
!=                Not Equals
>                 Greater than
<                 Lesser than
>=                Greater than or Equal to
<=                Lesser than or Equal to

Logics are determined by logical operators

Logical Operators
=================

Operator            Name

&&                   AND
||                   OR
!                    NOT
&                    Bitwise AND
|                    Bitwise OR

In C decision making can be done by using decision making programing construct
they are..

1. if
2. if .. else
3. switch .. case
4. goto
5. break
6. continue

Decision making programming constructs are also known as decision making statement
or conditional statement or branching statement.

it is must that decision making statements carry with relational or logical expression
*/

/*

1. if statement
===============
if statement executes some set of statement if the given contion is true.

it is also known as one way branching statement
syntax
------

if( <condition_expression> )
{
 // Set of statement or block of statement
}



note:
1. block is a set of statements defined with in { (open curly brace) and } (close curly brace)
2. expression is a combination of operators and operands
which gives a single value result.
3. non-zero value considered as TRUE(1). zero is considered as FALSE(0)


Example
-------

if(gender == 'M')
{
printf("Male\n");
}

*/

/*
2. if .. else statement
========================
if..else statement executes different set of statements
if the given condion is either true or false.

if the condition true, then if block statements will be executed.
if the condition is false then else block of statments will be executed.


its also known as two way branching statementt.

syntax
------

if( <condition_expression> )
{
 //true block
}
else
{
 // False block
}

Example
=======

if(gender == 'M')
{
printf("Male\n");
}
else
{
printf("Female\n");
}

*/

/*

else  if ladder
===============
else if ladder is Multiple  branching statement

if(condition1)
{
//condition 1 true block
}
else if(condition2)
{
//condition 2 true block
}
else if (condition 3)
{
//condition 3 true block
}
...
...
...
else if(condition N)
{
//condition N true block
}

*/


 /*

3. switch..case
===============
switch case is multi way branching statement.

switch case executes particular case block if the case value matches with
switch case expression value.

syndax
=====

switch(<expression>)
{

case <value1>:

   //set of statements
   break;

case <value2>:

    // set of statements
    break;
.
.
.
.
case <value N>:
    // set of statement
    break;

default:
    // set of statement

}

example:
========

switch(number)
{
case 1:
    printf("ONE\n") ;
    break;
case 2:
    printf("TWO\n");
    break;

default:
   printf("number is not one or two");
}
*/

/*

switch(gender)
{
case 'M':
    printf("MALE\n") ;
    break;
case 'F':
    printf("FEMALE\n");
    break;

default:
   printf("TG\n");
}


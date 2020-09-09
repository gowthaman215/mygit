// To write a C program to get age as an interactive input from the user
// and print the age as an output


#include <stdio.h> // Turbo C compiler supportts default header inclusion.
#include <conio.h> //console input output header


/*
int main()
{
int age;
//age=18; // Hardcoded value/data
clrscr();
printf("Enter your age ; ");
scanf("%d",&age);
printf("My age is %d\n",age);  // \n - newline character.
return 0; // to transfer control to calling statement of a function
}
*/

// Program to read and display all types data.
/*
int main()
{

int i;
float f;
char c;
double d;
short s;
long l;
signed int si;
unsigned int ui;


//Program Input

i=10;
f=4.5;
c='h';
d=23.2323223232323232323232323232090;
s=255;
l=121212121;
si=-1;
ui=23452;

clrscr();

printf("i = %d\n",i);
printf("f = %f\n",f);
printf("c = %c\n",c);
printf("d = %g\n",d);
printf("s = %d\n",s);
printf("l = %ld\n",l);
printf("si = %d\n",si);
printf("ui = %u\n",ui);


printf("===============\n\n");

//interactive input

printf("i = ");
scanf("%d",&i);

printf("f = ");
scanf("%f",&f);

printf("c = ");
scanf("%c",&c);

printf("d = ");
scanf("%g",&d);

printf("s = ");
scanf("%d",&s);

printf("l = ");
scanf("%ld",&l);

printf("si = ");
scanf("%d",&si);

printf("ui = ");
scanf("%u",&ui);

printf("===============\n\n");

printf("i = %d\n",i);
printf("f = %f\n",f);
printf("c = %c\n",c);
printf("d = %g\n",d);
printf("s = %d\n",s);
printf("l = %ld\n",l);
printf("si = %d\n",si);
printf("ui = %u\n",ui);



return 0;
}
*/

int main()
{

int d;
clrscr();
printf("sizeof int is %d bytes\n", sizeof(int));
printf("sizeof float is %d bytes\n", sizeof(float));

printf("enter any integer : ");
scanf("%d",&d);
printf("given int value is %d",d);

return 0;
}
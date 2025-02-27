#include <stdio.h>

int main (){
/*
	Arithmetic operators:

	+ 	(addition)
	- 	(subtraction)
	* 	(multiplication)
	/ 	(division)
	% 	(modulus) 
	++	(increment)
	--	(decrement)
*/
short int x = 5;
short int y = 5;
int z;
printf("%d and %d \n",x,y);
z=x+y;
printf("add result: %d\n",z);
z=x-y;
printf("sub result: %d\n",z);
z=x*y;
printf("mult result: %d\n",z);
z=x/y;
printf("div result: %d\n",z); // for a division it's better to store the result in a float because like this we wouldn't lose .1
z=x%y;
printf("modulus result: %d\n",z);
z++;
printf("increment result: %d\n",z);
z--;
printf("modulus result: %d\n",z);
printf("TEST\n");
z=z*y;
printf("variable mult par zero = %d\n",z);
float a=0.5;
int b=3;
z=b*a;
printf("div par 2 dans un int = %d\n",z);
unsigned short int c = 10;
c=z-c;
printf("calcul qui a arrive a -10 un int = %d\n",c);

int p = 2;
int U = 3;
float W=p/(float)U;

printf("caca %0.5f\n", W);
}


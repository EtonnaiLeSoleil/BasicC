#include <stdio.h>

int main(){
	/*
	Allocated space in memory to store a value.
	we refer to a variable's name to access the stored value.
	that variable now behaves as if it was the value it contains.
	BUT we need to declare what type of data we are storing 
	
	*/
	int x;//declaration 
	x=123; //initialization
	int y = 321; // declaration + intialization 

	int age= 18; //integer
	float pipi = 3.141592653589793; // floating point number 

	char grade ='B'; // Char can only stock SINGLE character like me 
	char fullName[]="Toino"; //array of characters this dude is no more single :)


	printf("x est egale a %d no \n", x);// %d for decimal is for emplacement of the int 
	printf("y est egale a %d yes \n", y);// same here
	printf("pi est = %f \n", pipi);
	printf("%s a %d et mes note sont de %c \n ", fullName, age, grade);//%s the s is for string like an array and the order of % have to be the same of the variable call 
	
	
	

	

	return 0;
}

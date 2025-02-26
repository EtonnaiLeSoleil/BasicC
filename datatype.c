#include <stdio.h>
#include <stdbool.h>

int main(){
	char a = 'A'; //single character			%c
	char b[]= "moi"; //array of character	%s

	float c = 3.4023482347; 			//4 bytes of memory (10 decimal) or 6 - 7 digit %f

	/*it can store numbers from 0 to 4,294,967,295 if unsigned
	but if signed it's from -2,147,483,648 to 2,147,483,647
	(referring to 32-bit integers)	

	*/
	double d = 1.79769313486231;	//8 bytes of memory (15-17 decimal) or 15 - 16 digits %lf

	bool e = true;  				//1 byte  of memory use (true or false) %d

	//char can also stored number
	char f = 97;					//1 byte of memory use (-128 - 127) %d or %c
	unsigned char g = 255;			//1 byte of memory use BUT it's unsigned (0 - 255) %d or %c 

	short int h = 32767; 			//2 Byte of memory use (-32,768 - 32,767) waooo %d
	unsigned short int i = 65535;	//2 Byte of memoru use (0 - 65,535) %d

	int j = 2147483647;				//4 Byte of memory use (-2,147,483,648 - 2,147,483,647)%d
	unsigned int k= 4294967295;		//4 Byte of memory use (0 - 4,294,967,295.)%d

	long long int l = 9223372036854775807; 				//8 byte of memory use (-9,223,372,036,854,775,808 - 9,223,372,036,854,775,807) or we can say (-9 quintillion to 9 quintiillion)
	unsigned long long int m = 18446744073709551615U;	//8 byte of memory use (0 - 18,446,744,073,709,551,615) or we can say (0 to 18 quintiillion) is we do not want the warning 
	
	
	printf("%0.15f \n", c); 		//float 0.x x=the maximum you want to print
	printf("%0.15lf\n", d);			//double	
	printf("%d \n", e); 			//bool
	printf("%d \n", f);				//char is a number
	printf("%c \n", f);				//char is a ASCII 97 stand for a :) but if put a number between 0 - 9 you have a digit but it cannot be used +-/*
	printf("%d \n", g);				//unsigned char %d
	printf("%c \n", g);				//or %c but 255 stand for nothing in the ASCII table :( 	////FUN FACT//// the ASCII table as 128 character in it 
	printf("%d \n", h);				//short int
	printf("%d \n", i);				//unsigned short int
	printf("%d \n", j);				//int
	printf("%u \n", k);				//unsigned int
	printf("%lld \n", l);			//long long int %lld 
	printf("%llu \n", m);			//unsigned long long int %llu

	return 0;
}

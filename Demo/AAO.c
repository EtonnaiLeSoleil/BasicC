#include <stdio.h>

int main(){
	/*
	augmented assignment operators provide a shorthand 
	way to combine an arithmetic 
	or bitwise operation with an assignment.
	They modify the variable directly, 
	rather than creating a new value and then assigning it.
	
	*/
int a=5;
int b=5;
int c=5;
int d=5;
int e=5;
int f=5;
int g=5;
int h=5;
int i=5;
int	j=5;
int	k=5;

a+=5;
b-=2;
c*=10;
d/=5;
e%=2;

f&= 4;
g|=3;
h^=5;
i<<=2;
j>>=1;


printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
printf("%d\n",g);
printf("%d\n",h);
printf("%d\n",i);
printf("%d\n",j);
printf("%d\n",k);
}

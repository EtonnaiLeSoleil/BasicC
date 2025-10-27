#include <stdio.h>
#include <string.h>

int main(){
	int age;
	char name[25]; //bytes

	printf("quelle est ton nom ?\n");
	//scanf("%s", &name); if the user put a blanck space the programme will bug cuz we use the wrong input format
	fgets(name, 25, stdin);
	//But if we simply use function we will have a newline so for fixing this we can use include<string.h>
	name[strlen(name)-1]= '\0';// advence way but do not worry we will talk about this later on 
	
	
	printf("vous avez quelle age ???\n");
	scanf("%d", &age);
	
	printf("cool tu t'appelle %s et tu a %d ans :)\n",name,age);

	return 0;
}

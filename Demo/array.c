#include <stdio.h>

int main(){
 int numbers[]={5,10,15,20,25,30};
 int size = sizeof(numbers)/sizeof(numbers[0]);

 printf("%d\n", size);

 for (int i = 0; i < size ;i++){
     printf("%d\t",numbers[i]);

}


}

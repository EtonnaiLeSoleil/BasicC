#include <stdio.h>
int a=1;
void koko(){
    printf("%d\n",a);
    a++;
}

int main(){


    while(a <= 1000) {
        koko();
    }

    return 0;
}

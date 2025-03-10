#include <stdio.h>
#include <assert.h>
#include <stdbool.h>


int main(){
    int a=5, b=true;
    printf("%d %d\n",a,b);
    {
        b=false;
        printf("%d\n",b);
    }
    assert(b==false);
    printf("%d\n",b);
    return 0;
}

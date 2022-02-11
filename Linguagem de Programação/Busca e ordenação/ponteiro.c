#include <stdio.h>
#include <stdlib.h>

int main(){
    int b, *c;
    b=10;
    c=&b;
    *c=11;
    printf("\n%d",b);

     return 0;
}
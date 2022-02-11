#include<stdio.h>
#include<stdlib.h>

int dobro(int x) {
    x=2*x;
    return x;
}

int main(){
    int n;
    printf("Digete um numero\n");
    scanf("%d", &n);
    n=dobro(n);
    printf("O dobro %d\n",n);
    return 0;

}
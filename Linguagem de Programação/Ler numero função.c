#include<stdio.h>
#include<stdlib.h>

int LeNumero() {
    int c;
    printf("Digite um numero:");
    scanf("%d", &c);
    return c;
}

int main() {
    int r1,r2;
    r1=LeNumero();
    printf("Numeor digitado 1: %d\n", r1);
    r2=LeNumero();
    printf("Numero Digitado 2: %d\n", r2);
    return 0;
}
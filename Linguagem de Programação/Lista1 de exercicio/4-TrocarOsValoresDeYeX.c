/*3. Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo
das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;

    printf("digite o valor de x:");
    scanf("%d", &x);
    printf("digite o valor de y:");
    scanf("%d", &y);

    x ^= y;
    y ^= x;
    x ^= y;

    printf(" o valor de x:%d e de y:%d", x , y);
}
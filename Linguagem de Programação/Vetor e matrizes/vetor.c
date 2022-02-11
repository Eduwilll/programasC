/*
 * Exercício 5 da lista de vetores (interseção)
 * v1: [1, 2, 3, 4, 5]
 * v2: [2,5,7,1,-9,18]
 * Resultado: [1, 2, 5]
 */

#include <stdio.h>

int main( )
{
    int v1[50], v2[50], v3[50];
    int tam1, tam2, tam3=0, i, j;

    printf("Digite o tamanho do vetor 1 (max. 50): ");
    scanf("%d", &tam1);

    printf("Digite os elementos do vetor 1\n");
    for(i=0; i<tam1; i++)
        scanf("%d", &v1[i]);


    printf("Digite o tamanho do vetor 2 (max. 50): ");
    scanf("%d", &tam2);

    printf("Digite os elementos do vetor 2\n");
    for(i=0; i<tam2; i++)
        scanf("%d", &v2[i]);


    for(i=0; i<tam1; i++) {
        for(j=0; j<tam2; j++) {
            if(v1[i] == v2[j]) {
                // achei um elemento igual
                v3[tam3] = v1[i];
                tam3++;
            }
        }
    }

    printf("\nVetor 1: ");
    for(i=0; i<tam1; i++)
        printf("%d, ", v1[i]);

    printf("\nVetor 2: ");
    for(i=0; i<tam2; i++)
        printf("%d, ", v2[i]);

    printf("\nResultado: ");
    for(i=0; i<tam3; i++)
        printf("%d, ", v3[i]);


    return 0;
}

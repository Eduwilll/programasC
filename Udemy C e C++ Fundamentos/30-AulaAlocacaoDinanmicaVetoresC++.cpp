#include <stdio.h>
#include <stdlib.h>

int main (){
    //definindo variaves
    int tamanho, cont;

    //lendo o tamanho
    printf("Digite o tamanho");
    scanf("%d",&tamanho);

    //criando o pronteiro que recebe o novo vetor vazio
    int *vetor = new int[tamanho];

    //modificando e imprimindo valores
    for (cont = 0; cont < tamanho; cont++)
    {
        vetor[cont] = cont;
        printf("\n%d",vetor[cont]);
    }
    free(vetor);
    
    return 0;
}
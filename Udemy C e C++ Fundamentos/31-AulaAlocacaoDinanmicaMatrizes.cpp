#include <stdio.h>
#include <stdlib.h>

int main (){

    //definindo variaves
    int linhas = 3, colunas = 3,i,j;
    int **matriz;

    //
    printf("Digite o numero de linhas: %d\n");
    scanf("%d",&linhas);
    printf("Digite o numero de colunas: %d\n");
    scanf("%d",&colunas);

    //alocando as linhas
    matriz = (int **) malloc(linhas * sizeof(int *));

    //alocando memoria para as coluna de cada linha
    for(i=0; i<linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    //Preenchendo valores e exibindo a matriz
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            matriz[i][j] = i;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    //libera a memoria
    free(matriz);

    return 0;
}
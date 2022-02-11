#include <stdio.h>
#include <stdlib.h>

int * alocaVetor( int tamanho){
    //É criado um ponteiro auxiliar
    int *aux;

    //alacoção dinamica de memoria
    aux =(int *) malloc(tamanho * sizeof(int));

    //retorna o ponteiro que aponta para a primeira posicao de memoria;
    return aux;
}

int main (){

    //Definindo Variaveis
    int *vetor, tamanho;

    //lendo o tamanho do vertor pelo usuario
    printf("Digite um tamanho para o vetor\n");
    scanf("%d",&tamanho);

    //Ponteiro recebe o endereco de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    //inseriando valores dentro do vetor de 4
    vetor[0] = 0; 
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;

    //imprimindo o vetor 
    for(int i=0; i <tamanho; i++){
        printf("\n%d",vetor[i]);
    }


    //limpar o a memoria aloca
    free (vetor);
    
    return 0;

}
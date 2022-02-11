#include<stdio.h>
#include<stdlib.h>
#define TAM 3

//função principal do programa
int main(){
    //definindo variaveis
    int vetor[TAM];
    int count;

    //passando os valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;
    //Adicionando 1 para cada posicao
    for(count = 0 ; count <= TAM ; count++){
        vetor[count] = vetor[count] + 1;
    }
    //exibindo os valaroes do vetor
    printf("\n Posicao 0: %d", vetor[0]);
    printf("\n Posicao 1: %d", vetor[1]);
    printf("\n Posicao 2: %d", vetor[2]);
    // Lendo 3 Valores para  o vetor
    for(count = 0 ; count <= TAM ; count++){
        printf("Lendo Valares do vetor:");
        scanf("%d", & vetor[count]);
    }
    //imprindo em laco de repeticao
    for(count = 0 ; count <= TAM ; count++){
        printf("\n No laco Posicao %d: %d",count, vetor[count]);
    }  
    //pausa o programa apos executar
    system("pause");
}
/*2. (2,5 pontos) Considere um vetor alocado dinamicamente dentro de uma funcao, em que cada elemento seja um
valor nao inteiro. Nesse vetor, devem ser armazenados os valores diferentes de zero contidos em vetor de 100
posicoes passado como parametro da funcao. Assim, a funcoo deve alocar dinamicamente um vetor e preenche-lo
com os valores diferentes de zero do vetor passado como parametro e retornar o endereco para esse vetor alocado
dinamicamente.

O protétipo da funcao deve ser:

float * novo_vetor(float v[]);*/

//Eduardo Fabricio Goza
//Samuel Alves Silva
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

float * novo_vetor(float v[]);

int main(){
    int i;
    int *vetor;
    float v[MAX];

    for(i = 0; i <  MAX ; i++ ){
        v[i] = 1.5*i;
        v[3]=0;
    }
    
    vetor= novo_vetor(v);
    
    printf("%.f ", vetor);
    
    return 0;
}


//Receber vetor como parametro e verificar se é float e diferente de zero.
float * novo_vetor(float v[]){
    int i,j=0,*vet;
    int *vetor;
    for(i = 0; i < MAX ; i++){ 
        printf("\n ");
        printf("indice[%d] = %.1f ",i,v[i]);
    }
    
    vet =(float *) malloc(MAX *sizeof(float));

    for(i = 0; i < MAX; i ++){
        if(v[i] !=0){
            v[j]= v[i];
            j++;
        }
    }
    printf("\n ");
    for(i = 0; i < j ; i++){ 
        printf("\n ");
        printf("indice[%d] = %1f ",i,v[i]);
    }
    printf("\n ");

    return vet;

}


#include<stdio.h>
#include<stdlib.h>

int main (){
    int i,  //Usado na estrutura de repetição, condição para saber quando o comando sai do laço.
        numero,  //variavel numero que vai ter a função de ser sempre o maior numero
        nmaior;  //Variavel vai 

    printf("Entre com um numero inteiro:");      
    scanf("%d", &numero); //Numero digitado antes de antrar no laço de repetição.

    nmaior=numero; //funciona como auxiliar, substituindo o numero menor pelo maior.

    for(i=1;i<1000;i++){  //laço para inserir 1000 numeros digitado

        printf("Digite %d Numero:",i+1);
        scanf("%d", &numero);

        if(numero>nmaior){  //Condiçãp para saber se o "numero" é maior que "nmaior"
            nmaior=numero;  //Caso seja, "nmaior" tem atribuido o valor de "numero". 
        }


    }
    printf("Entrando o Maior numero: %d,",nmaior); //Para exibir o resultado do algoritimo

    return 0;
}

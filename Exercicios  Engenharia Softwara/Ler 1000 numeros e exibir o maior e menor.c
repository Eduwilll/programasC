#include<stdio.h>
#include<stdlib.h>

int main (){
    int i,  
        numero,  //variavel numero que vai ter a função de ser sempre o maior numero
        nmenor,  //Variavel vai ser o numero anterior
        nmaior;  //Variavel vai 

    printf("Entre com um numero inteiro:");      
    scanf("%d", &numero);

   nmaior=numero; //funciona como auxiliar, substituindo o numero menor pelo maior.
   nmenor=numero;

    for(i=1;i<10;i++){  //laço para inserir 1000 numeros digitado

        printf("Digite %d Numero:",i+1);
        scanf("%d", &numero);

        if(numero>nmaior){  //Condiçãp para saber se o "numero" é maior que "nmaior"
            nmaior=numero;  //Caso seja, "nmaior" tem atribuido o valor de "numero". 
        }else if (numero<nmenor){ //Condição para saber se o "nmenor" é maior que "numero"
            nmenor=numero;        //Caso seja, "nmenor" tem atribuido valor de "numero"
        }


    }
    printf("\nEntrando o Maior numero: %d,",nmaior); //Para exibir o resultado do algoritimo
    printf("\nEntrando o Menor numero: %d,",nmenor);

    return 0;
}

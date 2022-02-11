/* Escreva uma função que recebe dois números inteiros positivos a e b por parâmetro e
determina se eles são amigos ou não, devolvendo 1 caso sejam amigos, e 0 caso contrário.
1Dois números são amigos se cada número é igual à soma dos divisores próprios do outro
(os divisores próprios de um número m são os divisores estritamente menores que m). Por
exemplo, os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110, cuja soma
é 284; e os divisores próprios de 284 são 1, 2, 4, 71 e 142, cuja soma é 220. Logo, 220 e
284 são números amigos. O protótipo da função deve ser:
int amigos(int a, int b);
*/
#include <stdio.h>
#include <stdlib.h>

int amigos(int a ,int b);

int main(){
    int a,b;
    int i;

    do
    {
        printf("Digite um Numoro positivo:");
        scanf("\n%d", &a);
        printf("Digite outro numero positivo:");
        scanf("\n%d", &b); 
    } while ((a <= 0) || (b <= 0));
    
    
    printf("%d", amigos(a,b));//chama a funcao e exibe

}
//funcao amigos
int amigos(int a,int b){
    int i,j;
    int aux1=0,aux2=0;
    //Checa e soma os numeros que dividem o A
    for(i=1; i <a ; i++){
        if(a % i ==0){
            aux1+=i;           
        }
    }
    //Checa e soma os numeros que dividem o B
    for(i=1; i < b ; i++){
        if(b % i ==0){
            aux2+=i; 
        }
    }
    if(aux1 == b && aux2 == a) {
        return 1;
    }else{
        return 0;
    }

}

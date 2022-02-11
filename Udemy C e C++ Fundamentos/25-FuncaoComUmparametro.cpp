#include<stdio.h>
#include<stdlib.h>

void mostraSucessor(int numero){
    printf("\no sucessor de %d eh %d", numero , numero +1);
}
int retornaAntecessor(int numero){
    return numero -1;
}

int main(){
    //definindo variaveis
    int a;

    //instucao
    printf("DIgite um valor:");
    //passa um valor para a
    scanf("%d",&a);
    //Chama a \no sucessor de %d eh %d", numero , numero +1funçao
    mostraSucessor(a);
    //recebe o antecessor
    printf("\no antecessor de %d eh %d",a, retornaAntecessor(a));

}
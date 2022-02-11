#include <stdio.h>
#include <stdlib.h>

void main(){
    //Definido variaveis
    int a = 5, b = 10, c = 25;
    char d = 'x';
    //maior
    if(a > 2){
        printf("\n %d eh maior que 2 ",a);
    }
    //Maior ou igual
    if(c >= b){
        printf("\n %d eh maior ou que %d ",c ,b);
    }
    //Menor
    if(a < 10){
        printf("\n %d eh maior que 10 ",a);
    }
    //Menor ou igual
    if(a <= 10){
        printf("\n %d eh maior ou igual que 10 ",a);
    }
    //Diferentes
    if(c != 10 ){
        printf("\n %d eh maior ou igual que 10 ",c);
    }
    if(d !='a'){
        printf("\n %c nao eh a ",d);
    }
    //pausa o programa apos a execução
    system("pause");
}
/*Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:
• É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
• É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
• É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
• É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.
Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Aposentável” 
caso o indivíduo se enquadrar em uma das situações acima. Caso contrário o
programa deverá imprimir “Não Aposentável”.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade,contribuicao;
    char c;
    printf("digite sua idade:");
    scanf("%d", &idade);
    printf("digite seus anos de contribuicao:");
    scanf("%d", &contribuicao);
    printf("Digite seu sexo;\n 'M' - Masculino \n 'F' - Feminino\n");
    scanf(" %c", &c); //Aqui adicionei um espaço antes do %C para limpar o buffer
   
    printf("%d,%d,%c", idade,contribuicao,c);
    if(idade >=61){
        if(c == 'M'){
            if(idade >= 63 && contribuicao >= 15 ){
                printf("\nEh do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.");
            }else if(idade >= 65 && contribuicao >= 10) {
                printf("\nEh do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.");
            }
        }else if(c == 'F'){
            if(idade >= 63 && contribuicao >= 10 ){
                printf("\nEh do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.");
            }else if(idade >= 61 && contribuicao >= 15 ){
                printf("\nEh do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.");
            }
        }else{
            printf("\nDigite 'M' para masculino ou 'F' para feminino" );
        }
    }else{
        printf("\nNao Aposentavel- Voce a possui idade Suficiente");
    }
}
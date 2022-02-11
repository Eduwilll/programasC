#include <stdio.h>
#include <string.h>

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};

int main(){

    //criar uma paralvra
    struct palavra primeiraPalavra;

    //Modificando os campos
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'p';
    strcpy(primeiraPalavra.texto, "palavrinha");

    //mostando valors do struct
    printf("Ordem: %d, letra: %c palavra: %s\n", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);

    //Fazendo uma lisa de palavras
    struct palavra listaDePalavras[3];

    //modificando os campos
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'd';
    listaDePalavras[1].letra = 'l';
    listaDePalavras[2].letra = 'b';
    strcpy(listaDePalavras[0].texto,"Dahora");
    strcpy(listaDePalavras[1].texto,"Legal");
    strcpy(listaDePalavras[2].texto,"Bacana");

    //percorrendo o vetor
    int cont;
    for(cont = 0; cont < 3; cont++){
        printf("\nOrdem: %d, letra: %c palavra: %s\n", listaDePalavras[cont].ordem, listaDePalavras[cont].letra, listaDePalavras[cont].texto);

    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main () {

    //Cursor que ira percorrer cada letra
    int c;
    char conteudoTexto[255];

    //arquivo a ser lido
    FILE *file;

    //abre o arquivo no dieretoria escolhido
    file = fopen ("Texto.txt", "r");

    //se o arquvio foi encontrado que
    if(file){

        //contador 
        int cont = 0;


        //enquando encontra letra ate o fim do arquvio
        while((c = getc(file)) != EOF) {

            //imprime na tela
            printf("%c", c);

            //vetor de char recebe a letra atual
            conteudoTexto[cont] = c;
            cont ++;
        }

        fclose(file);
    }
    //imprimindo conteudo lido
    for (int cont = 0 ; cont < strlen(conteudoTexto) ; cont ++){
        printf("%c", conteudoTexto[cont]);
    }

    return 0;
}
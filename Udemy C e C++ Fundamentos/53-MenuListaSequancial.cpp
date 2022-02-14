#include <iostream>
#include <string>
#include <stdlib.h>
#include <new>

using namespace std;

struct pessoa{
    string nome;
    int RG;
    struct pessoa *proximo;
};

void limpaTela(){
    system("CLS");
}

int retornaTamanho(pessoa *ponteiroEncadeada){

    //se a lista estiver vazia
    if(ponteiroEncadeada->nome == ""){
        return 0;
    }


    //tamanho da lista
    int tamanho = 0;

    //ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    
    while(p != NULL){

        //Atualiza o cursor
        p= p->proximo;

        //contador de tamnho aumenta
        tamanho++;

    }

    return tamanho;
}

void imprimeEncadeada(pessoa *ponteiroEncadeada){

    //Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    while(p != NULL){

        cout << p->nome << ", " << p->RG << "\n";


        //Atualiza o cursor
        p= p->proximo;


    }



}

void adcComecoEncadeada(pessoa *&ponteiroEncadeada,string nome,int RG){

    //cria uma nova estrutura
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->RG = RG;

    //Verifica se a lista esta vazia
    if(ponteiroEncadeada->nome == ""){
        novoValor->proximo = NULL;
    }else{
        novoValor->proximo = ponteiroEncadeada;
    }
    //redirecione o ponteiro
    ponteiroEncadeada = novoValor;

}



int main(){

    //variaveis
    int funcaoDesejada = 1;

    //Cria o inicio da lista encadeada
    pessoa *ponteiroEncadeada = new pessoa;
    ponteiroEncadeada-> nome = "";
    ponteiroEncadeada->RG = 0;
    ponteiroEncadeada->proximo = NULL;

    /* //Cria o primeiro valor
    pessoa *novoPrimeiroValor = new pessoa;
    novoPrimeiroValor->nome ="John";
    novoPrimeiroValor->RG =123;
    novoPrimeiroValor->proximo = NULL;

    //Transforma o ponteiro do inicio da lista em um novo valor
    ponteiroEncadeada = novoPrimeiroValor;

    //Cria o segundo valor
    pessoa *novoSegundoValor = new pessoa;
    novoSegundoValor->nome ="John";
    novoSegundoValor->RG =123;
    novoSegundoValor->proximo = NULL;

    //Encadeamento de valores
    novoPrimeiroValor->proximo = novoSegundoValor;*/

    while(funcaoDesejada < 9 && funcaoDesejada > 0){

        //Mostrando o Menu
        cout << "\nOperacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de node no fim da lista \n";
        cout << "3 - Insercao de node na posicao N\n";
        cout << "4 - Retirar um node do inicio da lista\n";
        cout << "5 - Retirar um node no fim da lista\n";
        cout << "6 - Retiara um node na posicao N\n";
        cout << "7 - Procurar um node com o campo RG\n";
        cout << "8 - Imprimir a Lista\n";
        cout << "9 - Sair do sistema\n";
        cout << "\n Escolha um numero e pressione ENTER: \n";
        cout << "\nTamanho Atual:" << retornaTamanho(ponteiroEncadeada) << "\n";

            //imprime lista
        if(retornaTamanho(ponteiroEncadeada) == 0){
            cout << "\nLista vazia\n";
        }else{
            imprimeEncadeada(ponteiroEncadeada);
        }
    
        //Lendo o call do usuario
        cin >> funcaoDesejada;

        limpaTela();

        //Variaveis para valores novos
        string nome;
        int RG;

        //chama a funcao desejada
        switch(funcaoDesejada){

            case 1:
                cout << "Funcao escolhida: 1 - Insercao de um nodeno inicio da lisa\n";

                //
                cout << "Digite um nome:" ;
                cin >> nome;
                cout << "Digite um RG:";
                cin >> RG;

                adcComecoEncadeada(ponteiroEncadeada,nome,RG);

                break;
        //     case 2:
        //         cout << "Funcao escolhida: 2 - Insercao de node no fim da lista \n";
        //         cout << "Digite um nome:" ;
        //         cin >> nome;
        //         cout << "Digite um RG:";
        //         cin >> RG;

        //         //se a lista for vazia usamos a funcao de criar o inicio
        //         if(tamanhoDaLista == 0){
        //             adcComecoSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);
        //         }else {

        //             adcFimSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);
        //         }
                

        //         break;
        //     case 3:

        //         cout << "Funcao escolhida: 3 - Insercao de node na posicao N\n";
        //         cout << "Digite um nome:" ;
        //         cin >> nome;
        //         cout << "Digite um RG:";
        //         cin >> RG;
        //         cout << "Digite uma posicao:";
        //         cin >> posicao;

        //         //se estiver adicionando no comeco
        //         if(posicao == 0){
        //             adcComecoSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);
        //         }else if(posicao == tamanhoDaLista){
        //             //quando quer adicionar ao fim
        //             adcFimSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);
        //         }else{
        //             //adiciona uma posicao especifica
        //             adcPosicaoSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG,posicao);

        //         }
        //         break;

        //     case 4:
        //         cout << "Funcao escolhida: 4 - Retirar um node do inicio da lista\n";
        //         //se a lista for vazia usamos a funcao de criar o inicio
        //         if(tamanhoDaLista == 0){
        //             cout << "\nLista Vazia!\n";
        //         }else {

        //             removeInicioSequencial(ponteiroSequencial,&tamanhoDaLista);
        //         }
        //         break;
        //     case 5:
        //         cout << "Funcao escolhida: 5 - Retirar um node no fim da lista\n";

        //         if(tamanhoDaLista == 0){
        //             cout << "\nLista Vazia!\n";
        //         }else {

        //             removeFimSequencial(ponteiroSequencial,&tamanhoDaLista);
        //         }
        //         break;
        //     case 6:
        //         cout << "Funcao escolhida: 6 - Retiara um node na posicao N\n";

        //         //verifica se a lista esta vazia
        //         if(tamanhoDaLista == 0){
        //             cout << "\nLista Vazia!\n";
        //         }else{
        //             cout << "Digite uma posicao:";
        //             cin >> posicao;
                    
        //             if(posicao == 0){
        //                 removeInicioSequencial(ponteiroSequencial,&tamanhoDaLista);

        //             }else if(posicao == tamanhoDaLista -1){
        //                 removeFimSequencial(ponteiroSequencial,&tamanhoDaLista);

        //             }else{
        //                 removePosicaoSequencial(ponteiroSequencial,&tamanhoDaLista, posicao);
        //             }

        //         }

                
        //         break;
        //     case 7:
        //         cout << "Funcao escolhida: 7 - Procurar um node com o campo RG\n";
        //         //verifica se a lista esta vazia
        //         if(tamanhoDaLista == 0){
        //             cout << "\nLista Vazia!\n";
        //         }else{
        //             cout << "Digite um RG:";
        //             cin >> RG;

        //             cout << "\nNome do rg:"<< retornaNomeSequencial(ponteiroSequencial,&tamanhoDaLista, RG) << "\n";
                                
                
        //         break;
        //     case 8:
        //         cout << "Funcao escolhida: 8 - Imprimir a Lista\n";
        //         //imprime a lista completa
        //         imprimeSequencial(ponteiroSequencial,tamanhoDaLista);
        //         break;
        //     case 9:
        //         cout << "Funcao escolhida: 9 - Sair do sistema\n";
        //         break;

        }

    
    }

    return 0;

}
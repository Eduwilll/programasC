#include <iostream>
#include <string>
#include <stdlib.h>
#include <new>

using namespace std;

struct pessoa {
    string nome;
    int RG;
};

void limpaTela(){
    system("CLS");
}

void imprimeSequencial(pessoa *ponteiroSequencial, int tamanhoDaLista){

    int cont;

    for(cont=0; cont < tamanhoDaLista; cont++){

        cout << cont << " - " << ponteiroSequencial[cont].nome << "," << ponteiroSequencial[cont].RG << "\n";

    }

}

void adcComecoSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaLista ,string nome, int RG) {
    //se a lista for vazia criaa uma lista nova;
    if(*tamanhoDaLista == 0){

        pessoa *novaListaSequencial = new pessoa[1];

        //Inseri o primeiro novo elemento;
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].RG = RG;

        //atualiza o ponteiro para a lista nova
        ponteiroSequencial = novaListaSequencial;

    }else{

        //caso a lista ja tenha menbros
        pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

        //Inseri o primeiro novo elemento;
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].RG = RG;

        //Passa os elemento do vetor antigo para novo
        for (int cont = 0; cont < *tamanhoDaLista; cont++)
        {
            novaListaSequencial[cont + 1].nome = ponteiroSequencial[cont].nome;
            novaListaSequencial[cont + 1].RG = ponteiroSequencial[cont].RG;

        }
        
        //atualiza o ponteiro para a lista nova
        ponteiroSequencial = novaListaSequencial;

        
    }
    //aumenta o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista + 1;

}

void adcFimSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaLista ,string nome, int RG){

    //cria uma lista com um tamnho maior
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

    //Passa os elemento do vetor antigo para novo
    for (int cont = 0; cont < *tamanhoDaLista; cont++)
    {
        novaListaSequencial[cont ].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont ].RG = ponteiroSequencial[cont].RG;

    }
    //posiciona o ultimo elemento
    novaListaSequencial[*tamanhoDaLista ].nome = nome;
    novaListaSequencial[*tamanhoDaLista ].RG = RG;

    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    //aumenta o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista + 1;
}

void adcPosicaoSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaLista ,string nome, int RG, int posicao){

    //cria uma lista com um tamnho maior
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

    for (int cont = 0; cont < posicao; cont++)
    {
        novaListaSequencial[cont ].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont ].RG = ponteiroSequencial[cont].RG;

    }

    //adiciona o novo registro na posicao correta
    novaListaSequencial[posicao ].nome = nome;
    novaListaSequencial[posicao ].RG = RG;

    //coloca o resto dos valores antigos
    for (int cont = posicao + 1; cont < *tamanhoDaLista +1; cont++)
    {
        novaListaSequencial[cont ].nome = ponteiroSequencial[cont - 1].nome;
        novaListaSequencial[cont ].RG = ponteiroSequencial[cont - 1].RG;
    }

    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    //aumenta o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista + 1;
}


void removeInicioSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaLista) {

    //caso a lista ja tenha menbros
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    //Passa os elemento do vetor antigo para novo
    for (int cont = 1; cont < *tamanhoDaLista; cont++)
    {
        novaListaSequencial[cont - 1].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont - 1].RG = ponteiroSequencial[cont].RG;

    }
        
    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    *tamanhoDaLista = *tamanhoDaLista - 1;
}

void removeFimSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaLista) {

    //caso a lista ja tenha menbros
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    //Passa os elemento do vetor antigo para novo
    for (int cont = 0; cont < *tamanhoDaLista - 1 ; cont++)
    {
        novaListaSequencial[cont ].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont ].RG = ponteiroSequencial[cont].RG;

    }
        
    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    *tamanhoDaLista = *tamanhoDaLista - 1;
}

void removePosicaoSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaLista , int posicao){

    //cria uma lista com um tamnho menor
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    for (int cont = 0; cont < *tamanhoDaLista -1; cont++)
    {   
        //se estiver antes da posciao passa normalmente
        if(cont <posicao){
            novaListaSequencial[cont ].nome = ponteiroSequencial[cont].nome;
            novaListaSequencial[cont ].RG = ponteiroSequencial[cont].RG;
        }else{
            novaListaSequencial[cont ].nome = ponteiroSequencial[cont + 1].nome;
            novaListaSequencial[cont ].RG = ponteiroSequencial[cont + 1].RG;
        }


    }

    //atualiza o ponteiro para a lista nova
    ponteiroSequencial = novaListaSequencial;

    //aumenta o tamanho da lista
    *tamanhoDaLista = *tamanhoDaLista - 1;
}

string retornaNomeSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaLista, int RG){

    string nome = "Nao encontrado";

    //busca pelo nome com o rg digitado
    for (int cont = 0; cont < *tamanhoDaLista; cont++)
    {
        if (ponteiroSequencial[cont].RG == RG)
        {
            nome = ponteiroSequencial[cont].nome;
        }
        
    }

    return nome;
    
}

int main() {


    //variaveis 
    int funcaoDesejada = 1;

    //ponteiro para lista sequencial
    pessoa *ponteiroSequencial;

    //tamanho da lista;
    int tamanhoDaLista = 0;

    // //exemplo
    pessoa *exemploListaSenquencial = new pessoa[1];

        // //dois registro de exemplo
        // exemploListaSenquencial[0].nome = "John";
        // exemploListaSenquencial[0].RG = 123;
        // exemploListaSenquencial[1].nome = "Maicon";
        // exemploListaSenquencial[1].RG = 321;

    // //faz o ponteiro Principal apontar para o novo vetor
    ponteiroSequencial = exemploListaSenquencial;


    

    //menu
    while(funcaoDesejada < 9 && funcaoDesejada > 0){
        
        //Mostrando o Menu
        cout << "\nOperacoes \n";
        cout << "1 - Insercao de um nodeno inicio da lista \n";
        cout << "2 - Insercao de node no fim da lista \n";
        cout << "3 - Insercao de node na posicao N\n";
        cout << "4 - Retirar um node do inicio da lista\n";
        cout << "5 - Retirar um node no fim da lista\n";
        cout << "6 - Retiara um node na posicao N\n";
        cout << "7 - Procurar um node com o campo RG\n";
        cout << "8 - Imprimir a Lista\n";
        cout << "9 - Sair do sistema\n";
        cout << "\n Escolha um numero e pressione ENTER: \n";

        //Lendo o call do usuario
        cin >> funcaoDesejada;

        limpaTela();

        //variaveis usadas nas operacoes
        string nome;
        int RG, posicao;

        //chama a funcao desejada
        switch(funcaoDesejada){

            case 1:
                cout << "Funcao escolhida: 1 - Insercao de um nodeno inicio da lisa\n";

                //
                cout << "Digite um nome:" ;
                cin >> nome;
                cout << "Digite um RG:";
                cin >> RG;

                adcComecoSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);

                break;
            case 2:
                cout << "Funcao escolhida: 2 - Insercao de node no fim da lista \n";
                cout << "Digite um nome:" ;
                cin >> nome;
                cout << "Digite um RG:";
                cin >> RG;

                //se a lista for vazia usamos a funcao de criar o inicio
                if(tamanhoDaLista == 0){
                    adcComecoSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);
                }else {

                    adcFimSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);
                }
                

                break;
            case 3:

                cout << "Funcao escolhida: 3 - Insercao de node na posicao N\n";
                cout << "Digite um nome:" ;
                cin >> nome;
                cout << "Digite um RG:";
                cin >> RG;
                cout << "Digite uma posicao:";
                cin >> posicao;

                //se estiver adicionando no comeco
                if(posicao == 0){
                    adcComecoSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);
                }else if(posicao == tamanhoDaLista){
                    //quando quer adicionar ao fim
                    adcFimSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG);
                }else{
                    //adiciona uma posicao especifica
                    adcPosicaoSequencial(ponteiroSequencial,&tamanhoDaLista,nome,RG,posicao);

                }
                break;

            case 4:
                cout << "Funcao escolhida: 4 - Retirar um node do inicio da lista\n";
                //se a lista for vazia usamos a funcao de criar o inicio
                if(tamanhoDaLista == 0){
                    cout << "\nLista Vazia!\n";
                }else {

                    removeInicioSequencial(ponteiroSequencial,&tamanhoDaLista);
                }
                break;
            case 5:
                cout << "Funcao escolhida: 5 - Retirar um node no fim da lista\n";

                if(tamanhoDaLista == 0){
                    cout << "\nLista Vazia!\n";
                }else {

                    removeFimSequencial(ponteiroSequencial,&tamanhoDaLista);
                }
                break;
            case 6:
                cout << "Funcao escolhida: 6 - Retiara um node na posicao N\n";

                //verifica se a lista esta vazia
                if(tamanhoDaLista == 0){
                    cout << "\nLista Vazia!\n";
                }else{
                    cout << "Digite uma posicao:";
                    cin >> posicao;
                    
                    if(posicao == 0){
                        removeInicioSequencial(ponteiroSequencial,&tamanhoDaLista);

                    }else if(posicao == tamanhoDaLista -1){
                        removeFimSequencial(ponteiroSequencial,&tamanhoDaLista);

                    }else{
                        removePosicaoSequencial(ponteiroSequencial,&tamanhoDaLista, posicao);
                    }

                }

                
                break;
            case 7:
                cout << "Funcao escolhida: 7 - Procurar um node com o campo RG\n";
                //verifica se a lista esta vazia
                if(tamanhoDaLista == 0){
                    cout << "\nLista Vazia!\n";
                }else{
                    cout << "Digite um RG:";
                    cin >> RG;

                    cout << "\nNome do rg:"<< retornaNomeSequencial(ponteiroSequencial,&tamanhoDaLista, RG) << "\n";
                                
                
                break;
            case 8:
                cout << "Funcao escolhida: 8 - Imprimir a Lista\n";
                //imprime a lista completa
                imprimeSequencial(ponteiroSequencial,tamanhoDaLista);
                break;
            case 9:
                cout << "Funcao escolhida: 9 - Sair do sistema\n";
                break;

            }

        }
    }
    return 0;
}

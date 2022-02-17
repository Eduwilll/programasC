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

void adcFimEncadeada(pessoa *&ponteiroEncadeada,string nome,int RG){

    //cria uma nova estrutura
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->RG = RG;

        //Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    while(p != NULL){

        //quando chega ao ultimo elemento faz ele apontar para o novo valor
        if(p->proximo == NULL){

            p->proximo = novoValor;
            return;
        }

        //Atualiza o cursor
        p= p->proximo;
    }
}

void adcPosicaoEncadeada(pessoa *&ponteiroEncadeada,string nome,int RG, int posicao){

    //cria uma nova estrutura
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->RG = RG;
    novoValor->proximo = NULL;

        //Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    //contador de posicoes
    int cont = 0;

    while(cont <= posicao){

        //quando chega um antes da posicao desejada
        if(cont <= posicao -1){

            //auxiliar do valor
            pessoa *aux = new pessoa;
            //armazena o proximo valor
            aux->proximo = p->proximo;
            //coloca o novo valor como o proximo dele
            p->proximo = novoValor;
            //faz com que o novo valor aponte para o proximo
            novoValor->proximo = aux->proximo;

            free(aux);
        
        }

        //Atualiza o cursor
        p= p->proximo;

        cont ++;

    }

}

void removeInicioEncadeada(pessoa *&ponteiroEncadeada){

    //se so existir um menbro na lista
    if(ponteiroEncadeada->proximo == NULL){
        //cria uma nova estrutura
        pessoa *novoValor = new pessoa;
        novoValor->nome = "";
        novoValor->RG = 0;
        novoValor->proximo = NULL;

        ponteiroEncadeada = novoValor;
    }else{
        //faz o ponteiro principal apontar para o proximo valor
        ponteiroEncadeada = ponteiroEncadeada->proximo;
    }
}

void removeFimEncadeada(pessoa *ponteiroEncadeada){

    //auxiliares
    pessoa *p = new pessoa;
    pessoa *aux = new pessoa;

    //ponteiro auxiliar
    p = ponteiroEncadeada;

    //passa pela lista
    while(p->proximo != NULL){
        //o auxiliar fica sendo um antes do cursor
        aux = p;
        //passa o cursor para o proximo elemento
        p = p->proximo;
    }

    aux->proximo = NULL;
}

void removePosicaoEncadeada(pessoa *ponteiroEncadeada, int posicao){

    //ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeada;

    //contador de posicoes
    int cont = 0;

    while(cont < posicao){

        //quando chega um antes da posicao desejada
        if(cont <= posicao -1){

            //auxiliar do valor
            pessoa *aux = new pessoa;
            //auxiliar recebe elemento que sera eliminado
            aux = p->proximo;
            //faz com que o proximo pule um elemento
            p->proximo = aux->proximo;

            free(aux);
        
        }


        //passa o cursor para o proximo elemento
        p= p->proximo;

        cont ++;
    }
}


string retornaNomeEncadeada(pessoa *ponteiroEncadeada,int RG){

    //Nome a ser retornado
    string nome ="Nome não Encontrado!";

    //ponteiro auxiliar
    pessoa *p = ponteiroEncadeada;

    //passa pela lista
    while(p != NULL){
        
        if(p->RG == RG){
            //recebe o nome do rg encontrado
            nome = p->nome;
        }
        //passa o cursor para o proximo elemento
        p = p->proximo;
    }

    return nome;
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
        int RG,posicao;

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
            case 2:
                cout << "Funcao escolhida: 2 - Insercao de node no fim da lista \n";
                cout << "Digite um nome:" ;
                cin >> nome;
                cout << "Digite um RG:";
                cin >> RG;

                //se a lista for vazia usamos a funcao de criar o inicio
                if(retornaTamanho(ponteiroEncadeada) == 0){
                    adcComecoEncadeada(ponteiroEncadeada,nome,RG);                   
                }else{
                    adcFimEncadeada(ponteiroEncadeada,nome,RG);
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
                    adcComecoEncadeada(ponteiroEncadeada,nome,RG);
                }else if(posicao == retornaTamanho(ponteiroEncadeada)-1){
                    //quando quer adicionar ao fim
                    adcFimEncadeada(ponteiroEncadeada,nome,RG);
                }else{
                    //adiciona uma posicao especifica
                    adcPosicaoEncadeada(ponteiroEncadeada,nome,RG,posicao);

                }
                break;

            case 4:
                cout << "Funcao escolhida: 4 - Retirar um node do inicio da lista\n";
                //se a lista for vazia usamos a funcao de criar o inicio
                if(retornaTamanho(ponteiroEncadeada) == 0){
                    cout << "\nLista Vazia!\n";
                }else {

                    removeInicioEncadeada(ponteiroEncadeada);
                }
                break;
            case 5:
                cout << "Funcao escolhida: 5 - Retirar um node no fim da lista\n";

                if(retornaTamanho(ponteiroEncadeada) == 1){
                    removeInicioEncadeada(ponteiroEncadeada);
                }else {

                    removeFimEncadeada(ponteiroEncadeada);
                }
                break;
            case 6:
                cout << "Funcao escolhida: 6 - Retiara um node na posicao N\n";
                cout << "Digite uma posicao:";
                cin >> posicao;
                //verifica se a lista esta vazia
                if(posicao == 0){
                    cout << "\nLista Vazia!\n";
                }else{
                    
                    if(posicao == 0){
                        removeInicioEncadeada(ponteiroEncadeada);

                    }else if(retornaTamanho(ponteiroEncadeada)-1){
                        removeFimEncadeada(ponteiroEncadeada);

                    }else{
                        removePosicaoEncadeada(ponteiroEncadeada,posicao);
                    }

                }

                
                break;
            case 7:
                cout << "Funcao escolhida: 7 - Procurar um node com o campo RG\n";
                //verifica se a lista esta vazia
                if(retornaTamanho(ponteiroEncadeada) == 0){
                    cout << "\nLista Vazia!\n";
                }else{
                    cout << "Digite um RG:";
                    cin >> RG;

                    cout << "\nNome do rg:" << retornaNomeEncadeada(ponteiroEncadeada,RG)<< "\n";                               
                }
                break;
            case 8:
                cout << "Funcao escolhida: 8 - Imprimir a Lista\n";
                //imprime a lista completa
                imprimeEncadeada(ponteiroEncadeada);
                break;
            case 9:
                cout << "Funcao escolhida: 9 - Sair do sistema\n";
                break;

        }

    
    }

    return 0;

}
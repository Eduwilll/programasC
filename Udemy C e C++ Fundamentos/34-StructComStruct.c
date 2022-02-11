#include <stdio.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;

}Data;

struct Aluno {
    int id;
    Data nascimento;
};

int main() {

    //criando aluno
    struct Aluno aluno1;

    //modificando valores
    aluno1.id = 15;
    aluno1.nascimento.ano = 1997;
    aluno1.nascimento.mes = 01;
    aluno1.nascimento.dia = 19;

    //imprimindo valores
    printf(" nascido em: %d / %d / %d", aluno1.nascimento.ano, aluno1.nascimento.mes, aluno1.nascimento.dia);
    return 0;
}
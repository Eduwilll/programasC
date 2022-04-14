/*
 * Defina uma estrutura para aluno com RA e idade.
 * Faça a leitura de 5 alunos em uma função.
 * Calcule e imprima a média das idades dos alunos.
 */

#include <stdio.h>

typedef struct Aluno {
    int ra;
    int idade;
} Aluno;

void lerEstudantes(Aluno[], int);

int main() {
    Aluno estudantes[5];
    int i;
    float mediaIdade = 0;

    lerEstudantes(estudantes, 5);

    for(i=0; i<5; i++) {
        printf("%d - Ra: %d \t Idade: %d\n", i,
        estudantes[i].ra, estudantes[i].idade);
        mediaIdade = mediaIdade + estudantes[i].idade;
    }

    mediaIdade = mediaIdade / 5.0;
    printf("\nMedia das idades: %.1f", mediaIdade);

    return 0;
}

void lerEstudantes(Aluno e[], int t) {
    int i;

    for(i=0; i<t; i++) {
        printf("Digite o RA do aluno %d: ", i+1);
        scanf("%d", &e[i].ra);
        printf("Digite sua idade: ");
        scanf("%d", &e[i].idade);
    }
}


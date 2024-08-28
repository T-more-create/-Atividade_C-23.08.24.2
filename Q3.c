#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
    char endereco[200];
} Cadastro;

Cadastro* criarCadastro(int N) {
    Cadastro* vetor = (Cadastro*)malloc(N * sizeof(Cadastro));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        printf("Cadastro %d:\n", i + 1);
        printf("Nome: ");
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &vetor[i].idade);
        getchar(); 

        printf("Endereço: ");
        fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
        vetor[i].endereco[strcspn(vetor[i].endereco, "\n")] = '\0';
    }

    return vetor;
}

void liberarCadastro(Cadastro* vetor) {
    free(vetor);
}

int main() {
    int N;

    printf("Insira o número de cadastros: ");
    scanf("%d", &N);
    getchar(); 

    Cadastro* meusCadastros = criarCadastro(N);

    printf("\nDados dos cadastros:\n");
    for (int i = 0; i < N; i++) {
        printf("\nCadastro %d:\n", i + 1);
        printf("Nome: %s\n", meusCadastros[i].nome);
        printf("Idade: %d\n", meusCadastros[i].idade);
        printf("Endereço: %s\n", meusCadastros[i].endereco);
    }

    liberarCadastro(meusCadastros);

    return 0;
}

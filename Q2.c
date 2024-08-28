#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome [100];
    float notas[3];

}Aluno;

int main(){
    printf("Tamanho da estrutura Aluno: %zu bytes\n", sizeof(Aluno));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    
    do {
        printf("Digite um valor inteiro não negativo para N: ");
        scanf("%d", &N);
        if (N < 0) {
            printf("Valor inválido. Tente novamente.\n");
        }
    } while (N < 0);

    int *V = (int*)malloc(N * sizeof(int));
    
    if (V == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        do {
            printf("Digite um valor inteiro >= 2 para V[%d]: ", i);
            scanf("%d", &V[i]);
            if (V[i] < 2) {
                printf("Valor inválido. Tente novamente.\n");
            }
        } while (V[i] < 2);
    }

    printf("Vetor V: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    free(V);

    return 0;
}

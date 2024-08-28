#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    int i;
    float f;
    double d;

    printf("Tamanho de char: %zu bytes\n", sizeof(c));
    printf("Tamanho de int: %zu bytes\n", sizeof(i));
    printf("Tamanho de float: %zu bytes\n", sizeof(f));
    printf("Tamanho de double: %zu bytes\n", sizeof(d));

    return 0;
}
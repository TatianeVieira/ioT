#include <stdio.h>
#include "C:\DESN2024 2V1\linguagem C\ioT\ex01.c"

int main(void) {
    int n;
    printf("Digite um número: ");
    if (scanf("%d", &n) != 1) return 1;
    int s = sinal(n);
    if (s == 1) printf("Número positivo\n");
    else if (s == 0) printf("Número negativo\n");
    else printf("Zero\n");
    return 0;
}
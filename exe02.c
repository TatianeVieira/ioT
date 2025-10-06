#include <stdio.h>
#include "C:\DESN2024 2V1\linguagem C\ioT\ex02.h"

int main(void) {
    int a, b;
    printf("Digite o 1 numero (positivo): ");
    if (scanf("%d", &a) != 1) return 1;
    printf("Digite o 2 numero (positivo): ");
    if (scanf("%d", &b) != 1) return 1;
    if (a < 0 || b < 0) {
        printf("Ambos devem ser positivos\n");
        return 1;
    }
    long s = soma_entre(a, b);
    printf("Soma = %ld\n", s);
    return 0;
}
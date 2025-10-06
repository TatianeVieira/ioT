#include <stdio.h>
#include <string.h>
#include <locale.h>

long soma_entre(int a, int b) {
    if (a == b) return 0;
    int menor = (a < b) ? a : b;
    int maior = (a < b) ? b : a;
    if (maior - menor <= 1) return 0; 
    long soma = 0;
    for (int i = menor + 1; i <= maior - 1; ++i) soma += i;
    return soma;
}
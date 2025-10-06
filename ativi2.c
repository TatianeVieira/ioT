#include <stdio.h>
#include <string.h>

int main() {
    char lojas[8][30];
    char produtos[4][30];
    float preco[8][4];
    int i, j;

    printf("Digite o nome das 8 lojas:\n");
    for(i = 0; i < 8; i++) {
        printf("Loja %d: ", i+1);
        scanf("%s", lojas[i]);
    }

    printf("\nDigite o nome dos 4 produtos:\n");
    for(j = 0; j < 4; j++) {
        printf("Produto %d: ", j+1);
        scanf("%s", produtos[j]);
    }

    printf("\nDigite os preços dos produtos em cada loja:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 4; j++) {
            printf("Preco do produto %s na loja %s: R$ ", produtos[j], lojas[i]);
            scanf("%f", &preco[i][j]);
        }
    }

    printf("\nProdutos com preco ate R$60,00:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 4; j++) {
            if(preco[i][j] <= 60)
                printf("Produto: %s - Loja: %s (R$ %.2f)\n", produtos[j], lojas[i], preco[i][j]);
                printf("Tatiane Vieira");
        }
    }

    return 0;
}
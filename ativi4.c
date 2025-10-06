#include <stdio.h>

int main() {
    int estoque[5][3]; // 4 armazéns + 1 linha de custos
    int i, j;
    int totalArmazem[4] = {0};
    float custoProduto[3] = {0}, custoArmazem[4] = {0};

    printf("Digite o estoque dos 3 produtos em 4 armazens:\n");
    for(i = 0; i < 4; i++) {
        printf("\nArmazem %d:\n", i+1);
        for(j = 0; j < 3; j++) {
            printf("Produto %d: ", j+1);
            scanf("%d", &estoque[i][j]);
        }
    }

    printf("\nDigite o custo de cada produto:\n");
    for(j = 0; j < 3; j++) {
        printf("Custo produto %d: R$ ", j+1);
        scanf("%d", &estoque[4][j]);
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            totalArmazem[i] += estoque[i][j];
        }
    }

    int maior = estoque[0][1], armMaior = 0;
    for(i = 1; i < 4; i++) {
        if(estoque[i][1] > maior) {
            maior = estoque[i][1];
            armMaior = i;
        }
    }

    int menor = totalArmazem[0], armMenor = 0;
    for(i = 1; i < 4; i++) {
        if(totalArmazem[i] < menor) {
            menor = totalArmazem[i];
            armMenor = i;
        }
    }

    for(j = 0; j < 3; j++) {
        for(i = 0; i < 4; i++) {
            custoProduto[j] += estoque[i][j] * estoque[4][j];
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            custoArmazem[i] += estoque[i][j] * estoque[4][j];
        }
    }

    printf("\n=== RELATORIO ===\n");
    for(i = 0; i < 4; i++)
        printf("Total de itens no armazem %d: %d\n", i+1, totalArmazem[i]);

    printf("\nArmazem com maior estoque do produto 2: %d", armMaior + 1);
    printf("\nArmazem com menor estoque total: %d\n", armMenor + 1);

    for(j = 0; j < 3; j++)
        printf("\nCusto total do produto %d: R$ %.2f", j+1, custoProduto[j]);

    for(i = 0; i < 4; i++)
        printf("\nCusto total do armazem %d: R$ %.2f", i+1, custoArmazem[i]);

    printf("\n");
    printf("Tatiane Vieira");
    return 0;
}
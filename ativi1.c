#include <stdio.h>

int main() {
    int M[2][2], R[2][2];
    int i, j, maior;

    printf("Digite os elementos da matriz M (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    maior = M[0][0];
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if(M[i][j] > maior)
                maior = M[i][j];
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            R[i][j] = M[i][j] * maior;
        }
    }

    printf("\nMatriz R (resultado da multiplicacao por %d):\n", maior);
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%4d ", R[i][j]);
        }
        printf("\n");
        printf("Tatiane Vieira");
    }

    return 0;
}
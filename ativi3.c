#include <stdio.h>

int main() {
    int vet[18], mat[3][6];
    int i, j, k = 0;

    printf("Digite 18 numeros inteiros:\n");
    for(i = 0; i < 18; i++) {
        printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 6; j++) {
            mat[i][j] = vet[k];
            k++;
        }
    }

    printf("\nMatriz 3x6 gerada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 6; j++) {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
        printf("Tatiane Vieira");
    }
    return 0;
}
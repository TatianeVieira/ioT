#include <stdio.h>

int main() {
    int i = 1;
    float nota1, nota2, media;
    int aprovados = 0, exame = 0, reprovados = 0;
    float somaMedias = 0;

    while (i <= 6) {
        printf("Digite a primeira nota do aluno %d: ", i);
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno %d: ", i);
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        somaMedias += media;

        printf("Media do aluno %d = %.2f  ", i, media);

        if (media <= 3) {
            printf("Reprovado\n");
            reprovados++;
        } else if (media < 7) {
            printf("Exame\n");
            exame++;
        } else {
            printf("Aprovado\n");
            aprovados++;
        }
        i++;
    }

    printf("\nResumo da Turma:\n");
    printf("Total de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos de exame: %d\n", exame);
    printf("Total de alunos reprovados: %d\n", reprovados);
    printf("Média da classe: %.2f\n", somaMedias / 6);

    return 0;
}
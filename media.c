#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, media;

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media foi de: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aluno Aprovado!\n");
    } else if (media >= 4.0) {
        printf("Exame.\n");
    } else {
        printf("Reprovado.\n");
    }

    printf("Fim do Programa...\n");
    
    return 0;
}
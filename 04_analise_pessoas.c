#include <stdio.h>

#define MAX 100

void lerPessoas(char nomes[][50], int idades[], float alturas[], int quantidade) {
    int i;

    for (i = 0; i < quantidade; i++) {
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura em metros (ex.: 1.65): ");
        scanf("%f", &alturas[i]);
    }
}

float calcularMediaAlturas(float alturas[], int quantidade) {
    int i;
    float soma = 0.0f;

    for (i = 0; i < quantidade; i++) {
        soma += alturas[i];
    }

    return soma / quantidade;
}
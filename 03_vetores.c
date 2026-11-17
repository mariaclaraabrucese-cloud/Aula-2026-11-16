#include <stdio.h>

#define MAX 100

void lerNumeros(int vetor[], int quantidade) {
    int i;

    for (i = 0; i < quantidade; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void exibirNumeros(int vetor[], int quantidade) {
    int i;

    printf("\nNumeros armazenados no vetor:\n");
    for (i = 0; i < quantidade; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(void) {
    int numeros[MAX];
    int quantidade;

    printf("=== LEITURA E EXIBICAO DE VETORES ===\n");
    printf("Quantos numeros deseja armazenar? (1 a %d): ", MAX);
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > MAX) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    lerNumeros(numeros, quantidade);
    exibirNumeros(numeros, quantidade);

    return 0;
}

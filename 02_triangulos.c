#include <stdio.h>

float calcularArea(float base, float altura) {
    return (base * altura) / 2.0f;
}

int main(void) {
    float base1, altura1, base2, altura2;
    float area1, area2;

    printf("=== COMPARACAO DE TRIANGULOS ===\n");

    printf("Digite a base do primeiro triangulo: ");
    scanf("%f", &base1);
    printf("Digite a altura do primeiro triangulo: ");
    scanf("%f", &altura1);

    printf("Digite a base do segundo triangulo: ");
    scanf("%f", &base2);
    printf("Digite a altura do segundo triangulo: ");
    scanf("%f", &altura2);

    area1 = calcularArea(base1, altura1);
    area2 = calcularArea(base2, altura2);

    printf("\nArea do primeiro triangulo: %.2f\n", area1);
    printf("Area do segundo triangulo: %.2f\n", area2);

    if (area1 > area2) {
        printf("O primeiro triangulo tem a maior area.\n");
    } else if (area2 > area1) {
        printf("O segundo triangulo tem a maior area.\n");
    } else {
        printf("Os dois triangulos possuem areas iguais.\n");
    }

    return 0;
}

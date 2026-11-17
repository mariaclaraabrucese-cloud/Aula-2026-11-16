#include <stdio.h>

float calcularArea(float largura, float altura) {
    return largura * altura;
}

int main(void) {
    float largura1, altura1, largura2, altura2;
    float area1, area2;

    printf("=== COMPARACAO DE RETANGULOS ===\n");

    printf("Digite a largura do primeiro retangulo: ");
    scanf("%f", &largura1);
    printf("Digite a altura do primeiro retangulo: ");
    scanf("%f", &altura1);

    printf("Digite a largura do segundo retangulo: ");
    scanf("%f", &largura2);
    printf("Digite a altura do segundo retangulo: ");
    scanf("%f", &altura2);

    area1 = calcularArea(largura1, altura1);
    area2 = calcularArea(largura2, altura2);

    printf("\nArea do primeiro retangulo: %.2f\n", area1);
    printf("Area do segundo retangulo: %.2f\n", area2);

    if (area1 > area2) {
        printf("O primeiro retangulo tem a maior area.\n");
    } else if (area2 > area1) {
        printf("O segundo retangulo tem a maior area.\n");
    } else {
        printf("Os dois retangulos possuem areas iguais.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int numero, maior;
    int primeiro = 1;  // marcação para indicar o primeiro número

    printf("Digite números (um número negativo encerra):\n");

    printf("Número: ");
    scanf("%d", &numero);

    // Enquanto o número for positivo ou zero, continue o loop
    while (numero >= 0) {
        // Se for o primeiro número ou o número for maior que o atual maior
        if (primeiro) {
            maior = numero;
            primeiro = 0;
        } else if (numero > maior) {
            maior = numero;
        }

        // Leia o próximo número
        printf("Número: ");
        scanf("%d", &numero);
    }

    // Verifique se pelo menos um número foi digitado
    if (primeiro) {
        printf("Nenhum número válido foi digitado.\n");
    } else {
        printf("O maior valor digitado foi: %d\n", maior);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int existeNoVetor(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1;
        }
    }
    return 0;
}

void preencheVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }
}

void exibeVetor(int vetor[], int tamanho) {
    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[TAMANHO];
    int valor;

    srand(time(NULL));

    preencheVetor(vetor, TAMANHO);

    exibeVetor(vetor, TAMANHO);

    do {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (existeNoVetor(vetor, TAMANHO, valor)) {
            printf("Valor duplicado! Digite outro valor.\n");
        } else {
            vetor[TAMANHO - 1] = valor;
            printf("Valor inserido com sucesso na última posição do vetor.\n");
            break;
        }
    } while (1);

    printf("Vetor após a inserção:\n");
    exibeVetor(vetor, TAMANHO);

    return 0;
}

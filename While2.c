#include <stdio.h>

int main() {
    int num = 0, qp = 0, sp = 0;
    float media = 0;

    printf("Digite numeros inteiros e -1000 para encerrar e fazer a media:\n");

    scanf("%d", &num);

    while(num != -1000) {
        if(num > 0) {
            qp++;
            sp += num;
        }

        printf("Digite um numero: ");
        scanf("%d", &num);
    }

    if(qp > 0) {
        media = sp / qp;
        printf("\nQuantidade de numeros positivos: %d\n", qp);
        printf("Media dos numeros positivos: %.2f\n", media);
    } else {
        printf("\nNenhum numero positivo foi digitado.\n");
    }

    return 0;
}

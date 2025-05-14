#include <stdio.h>

void questao01(int *a, int *b);

int main()
{
    int num1, num2;

    printf("Digite o valor para a: ");
    scanf("%d", &num1);

    printf("Digite o valor para b: ");
    scanf("%d", &num2);

    printf("Valores iniciais:\n");
    printf("a = %d\n", num1);
    printf("b = %d\n", num2);

    questao01(&num1, &num2);

    printf("Valores após a chamada da função:\n");
    printf("a = %d\n", num1);
    printf("b = %d\n", num2);

    return 0;
}

void questao01(int *a, int *b)
{
    (*a)--;

    (*b)++;
}

#include<stdio.h>
int main()
{
    float n1, n2, n3, media;

    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media= (n1 + n2 + n3) / 3;

    if (media > 8)
    {
        printf("Aprovado com Distinção!\n");
    }
    else if (media >= 6)
    {
        printf("Aprovado Direto!\n");
    }
    else if (media >= 4)
    {
        printf("Vai para a Final.\n");
    }
    else
    {
        printf("Reprovado direto!!\n");
        printf("Sua média é %.1f\n", media);
    }
    return 0;
}

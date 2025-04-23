#include<stdio.h>
int main ()
{
    float litros, alt, larg, m2;
    int nb=1;

    printf("Digite a altura e largura de sua parede: \n");
    scanf("%f %f", &alt, &larg);

    m2=alt*larg;

    printf("A área total da sua parede é %.1f \n", m2);

    litros=m2/2;
    nb = floor(litros);

    if (litros == nb)
    {
        printf("%.0f litros\n", litros);
    }
    else
    {
        printf("%d litros\n", nb+1);
    }
    return 0;
}

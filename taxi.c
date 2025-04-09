#include<stdio.h>
int main()
{

    float A, G, Ra, Rg;
    printf("Informe o valor do alcool e da gasolina e seus rendimentos respectivamente: ");
    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);

    if(Ra/A>Rg/G)
        printf("A");
    else
        printf("G");
}

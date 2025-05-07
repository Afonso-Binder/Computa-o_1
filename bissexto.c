#include <stdio.h>
int bissexto (int ano)
{
    if(ano % 4 == 0 &&(ano % 100 !=0 || ano% 400 == 0))
    {
        printf("Ano %d é bissexto", ano);
    }
    else
    {
        printf("Ano %d não é bissexto", ano);
    }
}

int main()
{
    int ano1;
    printf("coloque um ano que quer verificar:\n");
    scanf("%d", &ano1);
    bis(ano1);
    return 0;
}

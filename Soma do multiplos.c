#include <stdio.h>
int main ()
{
    int nb, vi, vf, i, s=0;

    printf("insira um número inteiro de base, um valor inicial e um valor final:\n");
    scanf("%d %d %d", &nb, &vi, &vf);

    for (i = vi; i <= vf; i++)
    {
        if (i % nb == 0)
        {
            s += i;
        }
    }

    printf("A soma dos múltiplos é: %d\n", s);

    return 0;
}

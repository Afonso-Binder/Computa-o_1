#include <stdio.h>
int main ()
{
    float n1, n2, n3, media, freq;

    printf("Digite as 3 separadas por espaços e escreva a frequencia do aluno no final notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &freq);

    media = (n1+ n2 + n3) / 3;

    if (media>8 && freq>=75)
        printf("O estudante foi aprovado com distinção pois teve média %.1f e frequencia %.1f%.\n", media, freq);
    else if (media>=6 && freq>=75 && media<=8)
        printf("O estudante foi aprovado direto pois teve média %.1f e frequencia %.1f%.\n", media, freq);
    else if (media>=4 && media<6 && freq>=75 || media>=6 && freq<75 || media>=4 && freq>50 && freq<75)
        printf("O estudante vai para recuperação pois teve média %.1f e frequencia %.1f%.\n", media, freq);
    else
        printf("O estudante foi reprovado direto pois teve média %.1f e frequência %.1f%.\n", media, freq);

    return 0;
}

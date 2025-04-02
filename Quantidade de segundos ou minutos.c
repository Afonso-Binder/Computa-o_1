#include<stdio.h>
int main(){

    int hora;
    float  min, seg;

    printf("Digite hora, minuto e segundo: ");
    scanf("%d %f %f", &hora, &min, &seg);

    if (hora>1 && min>15)
    {
    seg= (hora*3600.0 + min*60.0+ seg);
        printf("Quantidade de segundos: %.1f\n\n", seg);
    }
    else
    {
    min= (hora*60.0 + min + seg/60.0);
        printf("Quantidade de minutos: %.1f\n", min);
    }
    return 0;
}

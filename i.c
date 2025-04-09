#include <stdio.h>
int main(){
    int n;

    printf("Digite um número positivo maior que um: ");
    scanf("%d", &n);

    printf("Números de 1 a 100 que divididos por %d dão resto 2:\n", n);

    int i = 1;
    while (i<=100){
        if(i % n == 2){
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}

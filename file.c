#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    FILE *arquivo;
    char nome_arquivo[200];
    char linha[256];
    int contador = 1;
    char cwd[1024];

    // Mostra o diretório atual
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Diretório atual: %s\n", cwd);
    }

    // Solicita o nome do arquivo
    printf("Digite o nome do arquivo (com extensão): ");
    scanf("%199s", nome_arquivo);

    printf("Tentando abrir: '%s'\n", nome_arquivo);

    // Tenta abrir o arquivo
    arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("\nERRO: Não foi possível abrir '%s'\n", nome_arquivo);
        printf("\nTente estas opções:\n");
        printf("1. Use o caminho completo: /caminho/para/arquivo.txt\n");
        printf("2. Use ./ antes do nome: ./arquivo.txt\n");
        printf("3. Verifique se o arquivo realmente existe\n");
        printf("4. Verifique as permissões do arquivo\n");

        // Tenta algumas variações comuns
        char temp[220];
        sprintf(temp, "./%s", nome_arquivo);
        printf("\nTentando com './': %s\n", temp);
        arquivo = fopen(temp, "r");

        if (arquivo == NULL) {
            printf("Também não funcionou com './'\n");
            return 1;
        } else {
            printf("Funcionou com './'!\n");
        }
    }

    printf("\n=== ARQUIVO ABERTO COM SUCESSO ===\n");
    printf("=== CONTEUDO DO ARQUIVO ===\n");

    // Lê e imprime linha por linha
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%d: %s", contador, linha);
        contador++;
    }

    fclose(arquivo);
    printf("\n=== FIM DO ARQUIVO ===\n");
    printf("Total de linhas: %d\n", contador - 1);

    return 0;
}

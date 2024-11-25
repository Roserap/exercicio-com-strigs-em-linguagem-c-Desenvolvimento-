#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100];
    char substring[100];
    char *posicao;

    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("Digite a substring: ");
    fgets(substring, sizeof(substring), stdin);

    substring[strcspn(substring, "\n")] = '\0';

    posicao = strstr(string, substring);

    if (posicao != NULL) {
        int indice = posicao - string;
        printf("A substring foi encontrada na posição: %d\n", indice);
    } else {
        printf("A substring não foi encontrada na string.\n");
    }

    return 0;
}

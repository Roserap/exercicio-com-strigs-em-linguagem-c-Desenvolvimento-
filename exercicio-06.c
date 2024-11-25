#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];
    char resultado[200];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    string1[strcspn(string1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    string2[strcspn(string2, "\n")] = '\0';

    strcpy(resultado, string1);
    strcat(resultado, string2);

    printf("Resultado da concatenação: %s\n", resultado);

    return 0;
}

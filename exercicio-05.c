#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    int comprimento = strlen(string);

    printf("String revertida: ");
    for (i = comprimento - 1; i >= 0; i--) {
        putchar(string[i]);
    }
    printf("\n");

    return 0;
}
